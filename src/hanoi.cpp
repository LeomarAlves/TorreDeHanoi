#include "../include/hanoi.h"
#include <iostream>
#include <stack>
#include <string>

using namespace std;

void inicializarHastes(int n, stack<int>& a, stack<int>& b, stack<int>& c){
    for (int i = n; i >= 1; i--)
    {
        a.push(i);
    }
}

void resolverHanoi(int n, stack<int>& origem, stack<int>& destino, stack<int>& auxiliar, char nomeOrigem, char nomeDestino, char nomeAuxiliar, int& contador) {
    if (n == 1) {
        int disco = origem.top();
        destino.push(disco);
        origem.pop();
        cout << "Mover disco " << disco << " de " << nomeOrigem << " para " << nomeDestino << endl;
        imprimirEstado(origem, auxiliar, destino);
        contador++;
        return;
    }

    resolverHanoi(n - 1, origem, auxiliar, destino, nomeOrigem, nomeAuxiliar, nomeDestino, contador);
    resolverHanoi(1, origem, destino, auxiliar, nomeOrigem, nomeDestino, nomeAuxiliar, contador);
    resolverHanoi(n - 1, auxiliar, destino, origem, nomeAuxiliar, nomeDestino, nomeOrigem, contador);
}

string imprimirPilha(char nome, stack<int> p){
    string texto = "";
    stack<int> temp;

    while(!p.empty()){
        temp.push(p.top());
        p.pop();
    }

    texto += nome;
    texto += ": [";

    while (!temp.empty()){
        texto += to_string(temp.top());
        if(temp.size() > 1){
            texto += ", ";
        }
        temp.pop();
    }
    
    texto += "]"; 

    return texto;
}

void imprimirEstado(stack<int> a, stack<int> b, stack<int> c) {
    cout << imprimirPilha('A', a) << " ";
    cout << imprimirPilha('B', b) << " ";
    cout << imprimirPilha('C', c) << endl;
}