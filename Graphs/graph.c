#include <stdio.h>
#include "graph.h"

void initializeGraph(Graph* g, int numVertices) {
    g->numVertices = numVertices;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            g->vertices[i][j] = 0;
        }
    }
}

void addEdge(Graph* g, int src, int dest) {
    if (src >= 0 && src < g->numVertices && dest >= 0 && dest < g->numVertices) {
        g->vertices[src][dest] = 1;
    }
}

void printGraph(const Graph* g) {
    for (int i = 0; i < g->numVertices; i++) {
        for (int j = 0; j < g->numVertices; j++) {
            printf("%d ", g->vertices[i][j]);
        }
        printf("\n");
    }
}

