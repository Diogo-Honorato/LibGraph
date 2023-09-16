#ifndef LIBGRAPH_H
#define LIBGRAPH_H

typedef struct Cell
{
    int adjacent;
    struct Cell *next;
    struct Cell *prev;
}Cell;

typedef struct Vertex
{
    int vertex;
    struct Vertex *next;
    struct Vertex *prev;
    Cell *adj;
}Vertex;

typedef struct Graph
{
    Vertex *first;
    Vertex *last;
}Graph;

extern Graph *graph;    

//adjlistlib.c

Graph *create_graph();

Vertex *create_vertex(int vertex);

Cell *create_cell(int adjacent);

Vertex *search_vertex(int vertex);

Vertex *add_vertex(int vertex);

int AddEdge(int vertex, int adjacent);

void PrintGraph();


//ReadFile.c
int line_counter(const char *file);

int **edge_file(const char *file_name);

//EdgeFileReader.c

void EdgeFileReader(const char *file_name);

//GraphPng.c

void command_prompt();

void make_png_file(FILE *file_in,FILE *file_out);

void GraphPng(const char *file_name);

#endif