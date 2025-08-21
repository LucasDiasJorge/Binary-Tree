# Binary Tree em C++

Este projeto implementa uma estrutura de árvore binária simples em C++. A estrutura está organizada como uma pequena livraria, com um arquivo principal para testes.

## Estrutura de Pastas

```
Binary-Tree/
├── include/
│   └── BinaryTree.h      # Cabeçalho da árvore binária
├── src/
│   ├── BinaryTree.cpp    # Implementação da árvore binária
│   └── main.cpp          # Exemplo de uso/teste
└── README.md             # Documentação
```

## Como compilar

No terminal, execute:

```
g++ -Iinclude src/main.cpp src/BinaryTree.cpp -o binary_tree.exe
```

## Como executar

```
./binary_tree.exe
```

## Funcionalidades
- Inserção de elementos
- Percurso em ordem (inorder)

## Exemplo de saída

```
Inorder traversal: 2 3 4 5 6 7 8
```

## Autor
Lucas Dias Jorge
