//
// Joaquim Madeira, AlgC, May 2020
// João Manuel Rodrigues, AlgC, May 2020
//
// GraphDFS - STACK-based Depth-First Search
//

#include "GraphDFSWithStack.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
#include "IntegersStack.h"

struct _GraphDFSWithStack {
  unsigned int* marked;
  int* predecessor;
  Graph* graph;
  unsigned int startVertex;
};

//Função para efetuar a travessia em profundidade
static void _dfsWithStack(GraphDFSWithStack* traversal, unsigned int vertex, unsigned int numVertices){
  
  Stack* stack = StackCreate(numVertices);

  StackPush(stack, vertex);
  traversal->marked[vertex] = 1;

  while(!StackIsEmpty(stack)){

    vertex = StackPop(stack);

    unsigned int* neighbors = GraphGetAdjacentsTo(traversal->graph, vertex);

    for (int i = 1; i <= neighbors[0]; i++) {
      
      unsigned int w = neighbors[i];
      if(traversal->marked[w] == 0){

         StackPush(stack, w);
        traversal->predecessor[w] = vertex;
        traversal->marked[w] = 1;
      }
    }

    free(neighbors);
  }
  StackDestroy(&stack);
}

GraphDFSWithStack* GraphDFSWithStackExecute(Graph* g,
                                            unsigned int startVertex) {
  assert(g != NULL);
  assert(0 <= startVertex && startVertex < GraphGetNumVertices(g));

  GraphDFSWithStack* traversal =
      (GraphDFSWithStack*)malloc(sizeof(struct _GraphDFSWithStack));
  assert(traversal != NULL);

  unsigned int numVertices = GraphGetNumVertices(g);

  traversal->marked = (unsigned int*)calloc(numVertices, sizeof(unsigned int));
  assert(traversal->marked != NULL);

  traversal->predecessor = (int*)malloc(numVertices * sizeof(int));
  assert(traversal->predecessor != NULL);
  for (int i = 0; i < numVertices; i++) {
    traversal->predecessor[i] = -1;
  }

  traversal->predecessor[startVertex] = 0;

  traversal->graph = g;
  traversal->startVertex = startVertex;

  // EFETUAR A TRAVESSIA
  // COMPLETAR !!
  _dfsWithStack(traversal, startVertex, numVertices);

  return traversal;
}

void GraphDFSWithStackDestroy(GraphDFSWithStack** p) {
  assert(*p != NULL);

  GraphDFSWithStack* aux = *p;

  free(aux->marked);
  free(aux->predecessor);

  free(*p);
  *p = NULL;
}

// Getting the result

unsigned int GraphDFSWithStackHasPathTo(const GraphDFSWithStack* p,
                                        unsigned int v) {
  assert(0 <= v && v < GraphGetNumVertices(p->graph));

  return p->marked[v];
}

Stack* GraphDFSWithStackPathTo(const GraphDFSWithStack* p, unsigned int v) {
  assert(0 <= v && v < GraphGetNumVertices(p->graph));

  Stack* s = StackCreate(GraphGetNumVertices(p->graph));

  if (p->marked[v] == 0) {
    return s;
  }

  // Store the path
  for (unsigned int current = v; current != p->startVertex;
       current = p->predecessor[current]) {
    StackPush(s, current);
  }

  StackPush(s, p->startVertex);

  return s;
}

// DISPLAYING on the console

void GraphDFSWithStackShowPath(const GraphDFSWithStack* p, unsigned int v) {
  assert(0 <= v && v < GraphGetNumVertices(p->graph));

  Stack* s = GraphDFSWithStackPathTo(p, v);

  while (StackIsEmpty(s) == 0) {
    printf("%d ", StackPop(s));
  }

  StackDestroy(&s);
}

void GraphDFSWithStackDisplay(const GraphDFSWithStack* p) {
  // COMPLETAR !!

  Graph* g = p->graph;
  printf("---\n");
  if (GraphIsWeighted(g)) {
    printf("Weighted ");
  }

  if (GraphIsComplete(g)) {
    printf("COMPLETE ");
  }

  if (GraphIsDigraph(g)) {
    printf("Digraph\n");
    printf("Max Out-Degree = %d\n", GraphGetMaxOutDegree(g));
  } else {
    printf("Graph\n");
    printf("Max Degree = %d\n", GraphGetMaxDegree(g));
  }
  printf("Vertices = %2d | Edges = %2d\n", GraphGetNumVertices(g), GraphGetNumEdges(g));
  
  printf("Initial Vertex: %d\n", p->startVertex);
  for (int i = 0; i < GraphGetNumVertices(g); i++){
    printf("%d ->\tmarked: %d\tpredecessor: %d\n", i, p->marked[i], p->predecessor[i]);
  }
}
