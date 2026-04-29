# Torre de Hanoi

Este projeto é uma implementação em C++ do clássico quebra-cabeça matemático **Torre de Hanoi**, utilizando a estrutura de dados `std::stack` (pilha) para representar as hastes e um algoritmo recursivo para a resolução.

## 🚀 Sobre o Projeto

A Torre de Hanoi consiste em três hastes (A, B e C) e um número de discos de diferentes tamanhos. O objetivo é mover todos os discos da haste de origem para a haste de destino, seguindo regras estritas.

### Regras do Jogo:
1. Apenas um disco pode ser movido por vez.
2. Cada movimento consiste em pegar o disco superior de uma das pilhas e colocá-lo no topo de outra pilha.
3. Nenhum disco pode ser colocado em cima de um disco menor.

## 🛠️ Tecnologias Utilizadas

- **Linguagem:** C++
- **Estruturas de Dados:** `std::stack` (STL)
- **Algoritmo:** Recursão

## 📂 Estrutura do Projeto

```text
.
├── main.cpp            # Ponto de entrada da aplicação interativa
├── include/
│   └── hanoi.h         # Definições de estruturas e protótipos de funções
├── src/
│   └── hanoi.cpp       # Implementação da lógica do jogo e do algoritmo
└── testes/
    └── test_hanoi.cpp  # Testes unitários e de integração
```

## 💻 Como Compilar e Executar

### Pré-requisitos
- Compilador C++ (recomendado GCC ou Clang)

### 1. Compilar o Programa Principal
Para compilar a versão interativa onde você pode definir o número de discos:

```bash
g++ main.cpp src/hanoi.cpp -I include -o hanoi
```

### 2. Executar
Após a compilação bem-sucedida, execute o binário gerado:

```bash
./hanoi
```

### 3. Executar Testes Automatizados
O projeto inclui uma suíte de testes básica para validar a lógica de inicialização e resolução:

```bash
g++ testes/test_hanoi.cpp src/hanoi.cpp -I include -o test_hanoi
./test_hanoi
```

## 🧠 Lógica de Implementação

O algoritmo utiliza uma abordagem **Dividir e Conquistar** através de recursão:
1. Move `n-1` discos da **Origem** para a **Auxiliar**.
2. Move o disco `n` (o maior) da **Origem** para o **Destino**.
3. Move os `n-1` discos da **Auxiliar** para o **Destino**.

A complexidade de tempo do algoritmo é $O(2^n)$, e o número total de movimentos realizados é $2^n - 1$.

## 📝 Justificativas Técnicas

### 1. Por que a Pilha é a estrutura de dados naturalmente adequada para modelar as hastes deste problema? ###

A Pilha (Stack) opera sob o princípio LIFO (Last-In, First-Out, ou "último a entrar, primeiro a sair"). As regras do quebra-cabeça Torre de Hanoi ditam exatamente este comportamento: você só pode mover os dicos que estão no topo da haste, tanto para retirar quanto para incluir.

### 2. Seria possível resolver este problema sem recursão? Se sim, como? Se não, por quê? ###

Sim, o problema poderia ser resolvido usando laços de repetição como for ou while para empilhar e desempilhar "manualmente" os discos nas hastes.
