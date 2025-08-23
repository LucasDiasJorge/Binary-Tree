# Explicação dos Algoritmos: BFS e DFS

Este documento explica brevemente os percursos BFS (Breadth-First Search) e DFS (Depth-First Search) aplicados à árvore binária deste projeto.

## Estrutura Utilizada
Cada nó possui:
- `data`: valor inteiro armazenado.
- `left` e `right`: ponteiros para filhos esquerdo e direito.

## DFS (Depth-First Search) - Pré-Ordem
Percurso em profundidade visita sistematicamente subárvores antes de irmãos.
No modo pré-ordem (implementado aqui):
1. Visita o nó atual (raiz).
2. Percorre recursivamente a subárvore esquerda.
3. Percorre recursivamente a subárvore direita.

Características:
- Implementação simples via recursão.
- Útil para serializar a estrutura.
- Ordem resultante evidencia a hierarquia de construção.

Complexidade:
- Tempo: O(n) (cada nó é visitado uma vez)
- Espaço: O(h) na pilha de recursão (h = altura da árvore); pior caso O(n) em árvore degenerada.

## BFS (Breadth-First Search) - Level-Order
Percurso em largura visita nós nível a nível da raiz às folhas.
Passos:
1. Inicia com a raiz em uma fila.
2. Repetidamente remove o primeiro elemento da fila, visita-o e enfileira seus filhos esquerdo e direito (se existirem).

Características:
- Requer uma fila (FIFO).
- Útil para encontrar distância mínima em árvores não ponderadas ou listar nós por nível.

Complexidade:
- Tempo: O(n)
- Espaço: O(w) onde w = largura máxima (n/2 no pior caso em árvore completa).

## Exemplos
Para a árvore inserida na `main` (valores: 5,3,7,2,4,6,8):

Representação (forma balanceada resultante das inserções):
```
        5
      /   \
     3     7
    / \   / \
   2  4  6  8
```

- DFS (pré-ordem): 5 3 2 4 7 6 8
- BFS (nível): 5 3 7 2 4 6 8
- Inorder (já existente): 2 3 4 5 6 7 8 (ordem crescente)

## Código Relacionado
- `std::vector<int> BinaryTree::dfs() const` usa helper recursivo `dfsPreOrder`.
- `std::vector<int> BinaryTree::bfs() const` usa `std::queue` para percorrer níveis.

## Referências Rápidas
- Uso típico de DFS: reconstrução de árvore, verificações estruturais, geração/serialização.
- Uso típico de BFS: menor caminho em níveis, checagem de largura, problemas de distância mínima em grafos não ponderados.

---
Documentação adicional pode ser expandida conforme novas funcionalidades forem incluídas.
