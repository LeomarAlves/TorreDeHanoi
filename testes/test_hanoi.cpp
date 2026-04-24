#include <iostream>
#include <stack>
#include <cassert>

using namespace std;

void inicializarHastes(int n, stack<int>& a, stack<int>& b, stack<int>& c);
void resolverHanoi(int n, stack<int>& origem, stack<int>& destino, stack<int>& auxiliar, char nomeOrigem, char nomeDestino, char nomeAuxiliar);

int main(){
    stack<int> hasteA, hasteB, hasteC;
    int n = 3;

    inicializarHastes(n, hasteA, hasteB, hasteC);

    assert(hasteA.size() == 3);
    assert(hasteB.empty() == true);
    assert(hasteC.empty() == true);
    assert(hasteA.top() == 1);

    cout << "Teste de inicialização passou com sucesso!" << endl;

    resolverHanoi(n, hasteA, hasteC, hasteB, 'A', 'C', 'B');

    assert(hasteA.empty() == true);
    assert(hasteB.empty() == true);
    assert(hasteC.size() ==3);
    assert(hasteC.top() == 1);

    cout << "Teste de resolução da Torre de Hanoi passou com sucesso!" << endl;

    return 0;
}
   
