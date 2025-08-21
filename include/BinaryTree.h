#ifndef BINARYTREE_H
#define BINARYTREE_H

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
public:
    BinaryTree();
    ~BinaryTree();
    void insert(int val);
    void inorder();
};

#endif // BINARYTREE_H
