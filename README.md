# Torre de Hanoi

Este projeto é uma implementação em C++ do clássico quebra-cabeça matemático **Torre de Hanoi**, utilizando a estrutura de dados `std::stack` (pilha) para representar as hastes.

## 🚀 Sobre o Projeto

A Torre de Hanoi consiste em três hastes e um número de discos de diferentes tamanhos que podem deslizar em qualquer haste. O enigma começa com os discos empilhados em uma haste em ordem decrescente de tamanho, o menor no topo.

### Regras:
1. Apenas um disco pode ser movido por vez.
2. Cada movimento consiste em pegar o disco superior de uma das pilhas e colocá-lo no topo de outra pilha.
3. Nenhum disco pode ser colocado em cima de um disco menor.

## 🛠️ Estrutura do Projeto

- `src/`: Contém os arquivos de implementação (.cpp).
  - `hanoi.cpp`: Lógica de inicialização e resolução recursiva.
  - `main.cpp`: Ponto de entrada que demonstra o funcionamento e valida a lógica com asserts.
- `include/`: Contém os arquivos de cabeçalho (.h).
  - `hanoi.h`: Protótipos das funções.
- `testes/`: Contém testes unitários e de integração.

## 💻 Como Executar

### Pré-requisitos
- Compilador C++ (GCC, Clang, etc.)

### Compilação
Para compilar o projeto manualmente, você pode usar o seguinte comando no terminal:

```bash
g++ src/main.cpp src/hanoi.cpp -I include -o hanoi
```

### Execução
Após a compilação, execute o binário gerado:

```bash
./hanoi
```

## 🧪 Testes

O arquivo `src/main.cpp` atualmente contém testes automatizados simples usando `assert` para garantir que:
1. As hastes sejam inicializadas corretamente.
2. O algoritmo mova todos os discos para a haste de destino respeitando as regras.
3. A pilha de origem termine vazia e a de destino contenha todos os discos na ordem correta.
