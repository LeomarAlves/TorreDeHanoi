#include "../include/hanoi.h"
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    hanoi meuJogo;
    meuJogo.contador = 0;
     int n;

    do
    {
        cout << "Informe o número de discos do quebra-cabeça (min: 1. max: 10): ";
        cin >> n;
    } while (n < 1 || n > 10);
    

    inicializarHastes(n, meuJogo.hasteA, meuJogo.hasteB, meuJogo.hasteC);
    resolverHanoi(n, meuJogo.hasteA, meuJogo.hasteC, meuJogo.hasteB, 'A', 'C', 'B', meuJogo);

    cout<< "Movimentos realizados: " << meuJogo.contador << endl;

    return 0;
}