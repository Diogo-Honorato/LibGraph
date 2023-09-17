# LibGraph
Descrição do Repositório: Biblioteca em C para distribuições Linux Debian/Ubuntu com Manipulação de Grafos com Integração ao Graphviz

Este repositório abriga uma biblioteca em linguagem C que permite a criação, manipulação e visualização de grafos. A principal funcionalidade desta biblioteca é a capacidade de ler informações de conexões a partir de arquivos .txt e representá-las como um grafo. Além disso, ela oferece integração direta com o Graphviz, uma ferramenta de código aberto desenvolvida pela AT&T Labs Research para a criação de gráficos a partir de scripts DOT.

Principais Recursos:

Criação e Manipulação de Grafos: Com esta biblioteca, você pode facilmente criar grafos direcionados ou não-direcionados e adicionar nós e arestas a eles.

Leitura de Arquivos de Conexões: A biblioteca suporta a leitura de arquivos .txt que descrevem as conexões entre os nós do grafo. Isso permite a importação rápida e conveniente de dados para representação gráfica.

Integração com o Graphviz: A ferramenta Graphviz é utilizada para gerar representações visuais dos grafos criados. Ela permite a criação de arquivos .png a partir dos arquivos.txt de conexões dos grafos, tornando a visualização dos dados fácil e acessível.

# Criando um grafo
Para começar a criar e manipular grafos, você deve alocar um grafo chamando a função "create_graph()".  
Exemplo de uso:
![Imagem da função crete_graph()](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/create_graph.png)

# Criando arestas manualmente
Para criar arestas entre os vértices, basta utilizar a função "AddEdge()" e escrever seu par de vértices.

Exemplo de uso:
![Imagem da função AddEdge()](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/AddEdge.png)

# Criando arestas com um arquivo.txt
Para criar arestas entre os vértices utilizando um arquivo.txt, primeiro terá que possuir um arquivo neste formato:  
1 2  
2 5  
3 1  
Exemplo de arquivo.txt:
![Exemplo de arquivo.txt](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/Exemplo_txt.png)

Depois, utilizar a função "EdgeFileReader()" e passar o caminho do arquivo.txt para ler o arquivo e criar as arestas do grafo.
Exemplo de uso:
![Exemplo de uso da função EdgeFileReader()](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/EdgeFileReader.png)

# Saída no Terminal
Para conseguir visualizar o grafo no terminal, basta utilizar a função "PrintGraph()".
Exemplo de uso:
![Exemplo de uso da função PrintGraph()](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/PrintGraph.png)

Exemplo da saída no terminal:
![Exemplo de uso da função PrintGraph()](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/GraphPrint_AddEdge.png)

Utilizando "EdgeFileReader()":
![Exemplo de uso da função PrintGraph()](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/PrintGraph_with_txt.png)

Exemplo da saída no terminal:
![Exemplo de uso da função PrintGraph()](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/GraphTerminal.png)

# Criando imagem.png do grafo
Para gerar as imgens do grafo, será necessário a função "GraphPng()" e passar o caminho do arquivo.txt de conexões para a função.
Exemplo de uso:
![Exemplo de uso da função GraphPng()](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/GraphPng.png)

Saída do arquivo.png:
![Imagem.png do grafo](https://github.com/Diogo-Honorato/LibGraph/blob/main/images/Graph.png)
