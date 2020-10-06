#include <iostream>
using namespace std;

struct Node
{
    int data; // Data for the tree
    struct Node* lt, *rt; //Nodes for the tree
    Node(int data)
    {
        this->data = data;
        lt = rt = NULL;
    }
};

void printPreorder(struct Node* node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    printPreorder(node->lt);
    printPreorder(node->rt);
}

int main()
{
    struct Node *root = new Node(20);
    root->lt = new Node(41);
    root->rt = new Node(52);
    root->lt->lt = new Node(71);
    root->lt->rt = new Node(89);
    root->rt->lt = new Node(64);
    root->rt->rt = new Node(37);
    cout << "\n Preorder traversal of binary tree is: ";
    printPreorder(root);
    return 0;
}
