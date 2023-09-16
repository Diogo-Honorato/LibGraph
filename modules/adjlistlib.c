#include <stdio.h>
#include <stdlib.h>
#include "libgraph.h"

Graph *graph;

Graph *create_graph()
{
    graph = (Graph*)malloc(sizeof(Graph));

    graph->first = NULL;
    graph->last = NULL;

    return graph;
}

Vertex *create_vertex(int vertex)
{
    Vertex *new_vertex = (Vertex*)malloc(sizeof(Vertex));

    new_vertex->next = NULL;
    new_vertex->prev = NULL;
    new_vertex->adj = NULL;
    new_vertex->vertex = vertex;

    return new_vertex;
}

Cell *create_cell(int adjacent)
{
    Cell *new_cell = (Cell*)malloc(sizeof(Cell));

    new_cell->adjacent = adjacent;
    new_cell->next = NULL;
    new_cell ->prev = NULL;

    return new_cell;
}

Vertex *search_vertex(int vertex)
{
    Vertex *aux = graph->first;
    
    while(aux != NULL)
    {
        if(aux->vertex == vertex)
        {
            return aux;
            break;
        }
        aux = aux->next;
    }
    return aux;
}

Vertex *add_vertex(int vertex)
{
    Vertex *new_vertex = create_vertex(vertex);

    if(graph->first == NULL)
    {
        graph->first = new_vertex;
    }
    else
    {
        graph->last->next = new_vertex;
        new_vertex->prev = graph->last;
    }

    graph->last = new_vertex;

    return new_vertex;
}

int AddEdge(int vertex, int adjacent)
{
    Vertex *aux = search_vertex(vertex);
    
    if(aux == NULL)
    {
      aux = add_vertex(vertex);  
    }

    Cell *new_cell = create_cell(adjacent);

    if(aux->adj == NULL)
    {
        aux->adj = new_cell;
    }
    else
    {
        new_cell->next = aux->adj;
        aux->adj->prev = new_cell;
        aux->adj = new_cell;
    }

    return vertex;
}

void PrintGraph()
{
    Vertex *aux = graph->first;
    Cell *current;

    while(aux)
    {
        printf("\nV[%d]: ",aux->vertex);
        current = aux->adj;

        while(current)
        {
            printf("(%d)->",current->adjacent);
            current = current->next;
        }
        aux = aux->next;
    }
    printf("\n\n");
}