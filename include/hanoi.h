#ifndef HANOI_H
#define HANOI_H
#include <stack>
#include <string>

using namespace std;

void inicializarHastes(int n, stack<int>& a, stack<int>& b, stack<int>& c);
void resolverHanoi(int n, stack<int>& origem, stack<int>& destino, stack<int>& auxiliar, char nomeOrigem, char nomeDestino, char nomeAuxiliar, int& contador);
string imprimirPilha(char nome, stack<int> p);
void imprimirEstado(stack<int> a, stack<int> b, stack<int> c);

#endif
