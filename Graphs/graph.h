#ifndef GRAPH_H
#define GRAPH_H

#define MAX_VERTICES 100

typedef struct {
    int vertices[MAX_VERTICES][MAX_VERTICES];
    int numVertices;
} Graph;

void initializeGraph(Graph* g, int numVertices);
void addEdge(Graph* g, int src, int dest);
void printGraph(const Graph* g);

#endif // GRAPH_H

