#include <iostream>
#include <stack>
#include <cassert>
#include "../include/hanoi.h"

using namespace std;

int main(){
    
    hanoi meuJogo;
    meuJogo.contador = 0;
    int n = 5;

    inicializarHastes(n, meuJogo.hasteA, meuJogo.hasteB, meuJogo.hasteC);

    assert(meuJogo.hasteA.size() == 5);
    assert(meuJogo.hasteB.empty() == true);
    assert(meuJogo.hasteC.empty() == true);
    assert(meuJogo.hasteA.top() == 1);

    cout << "Teste de inicialização passou com sucesso!" << endl;

    resolverHanoi(n, meuJogo.hasteA, meuJogo.hasteC, meuJogo.hasteB, 'A', 'C', 'B', meuJogo);

    assert(meuJogo.hasteA.empty() == true);
    assert(meuJogo.hasteB.empty() == true);
    assert(meuJogo.hasteC.size() ==5);
    assert(meuJogo.hasteC.top() == 1);
    assert(meuJogo.contador == 31);

    cout<< "Movimentos realizados: " << meuJogo.contador << endl;
    cout << "Teste de resolução da Torre de Hanoi passou com sucesso!" << endl;

    return 0;
}
   
