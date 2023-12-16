#include "arquivos/utils.h"

int verificaVertices (Vertice *vertices, char *string, int n); 
void verificaOrigem (Vertice vertice, char *string);

void DFS(Vertice* vertices, int vertice, int* visitados, Pilha* pilha, int n);

void kosaraju(Vertice *vertices, int n, FILE* bin);