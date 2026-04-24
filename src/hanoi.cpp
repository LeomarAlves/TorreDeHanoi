#include <iostream>
#include <stack>

using namespace std;

void inicializarHastes(int n, stack<int>& a, stack<int>& b, stack<int>& c){
    for (int i = n; i >= 1; i--)
    {
        a.push(i);
    }
    
}

