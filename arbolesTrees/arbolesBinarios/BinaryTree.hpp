/* Archivo de definiciones para el árbol binario */

// #include "iBinTree.hpp"

typedef int element_t;

struct btNode
{
    element_t ele;
    btNode *left;
    btNode *right;
};

struct btNode *insert(element_t ele)
{
    struct btNode *node = (struct btNode *)malloc(sizeof(struct btNode));

    node->ele = ele;
    node->left = nullptr;
    node->right = nullptr;

    return (node);
};

// class BinaryTree : public iBinTree
// {
// public:
//     BinaryTree();
//     ~BinaryTree();
// };

void preOrder(btNode *);
void inOrder(btNode *);
void postOrder(btNode *);

void preOrder(btNode *aux)
{
    if (aux != nullptr)
    {
        std::cout << " " << aux->ele;
        preOrder(aux->left);
        preOrder(aux->right);
    }
}

void inOrder(btNode *aux)
{
    if (aux != nullptr)
    {
        inOrder(aux->left);
        std::cout << " " << aux->ele;
        inOrder(aux->right);
    }
}

void postOrder(btNode *aux)
{
    if (aux != nullptr)
    {
        postOrder(aux->left);
        postOrder(aux->right);
        std::cout << " " << aux->ele;
    }
}