#include <stdio.h>
#include "graph.h"

int main() {
    Graph g;
    int numVertices = 5;

    initializeGraph(&g, numVertices);

    addEdge(&g, 0, 1);
    addEdge(&g, 0, 2);
    addEdge(&g, 1, 2);
    addEdge(&g, 2, 0);
    addEdge(&g, 2, 3);
    addEdge(&g, 3, 3);

    printf("Adjacency matrix of the graph:\n");
    printGraph(&g);

    return 0;
}

