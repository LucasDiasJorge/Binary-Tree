#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <vector>

class BinaryTree {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int val) : data(val), left(nullptr), right(nullptr) {}
    };
    Node* root;
    void insert(Node*& node, int val);
    void inorder(Node* node);
    void destroy(Node* node);
    void dfsPreOrder(Node* node, std::vector<int>& out) const; // helper recursivo
public:
    BinaryTree();
    ~BinaryTree();
    void insert(int val);
    void inorder(); // saída em ordem (já existente)

    // Retorna vetor com percurso em largura (BFS / level-order)
    std::vector<int> bfs() const;

    // Retorna vetor com percurso em profundidade (DFS pré-ordem)
    std::vector<int> dfs() const; // wrapper para dfsPreOrder
};

#endif // BINARYTREE_H
