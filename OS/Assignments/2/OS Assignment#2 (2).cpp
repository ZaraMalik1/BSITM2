#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode *createNode(int data)
{
    BstNode *newNode = new BstNode();

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BstNode *insertNode(BstNode *root, int data)
{
    if (root == NULL)
        root = createNode(data);
    else if (data <= root->data)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);
    return root;
}

bool searchNode(BstNode *root, int data)
{
    if (root == NULL)
        return false;
    else if (data == root->data)
        return true;
    else if (data <= root->data)
        return searchNode(root->left, data);
    else
        return searchNode(root->right, data);
}



BstNode *deleteNode(BstNode *root, int data)
{
    if (root == NULL)
        return root;
    else if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)
        {
            BstNode *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            BstNode *temp = root;
            root = root->left;
            delete temp;
        }
        
    }
    return root;
}

int main()
{
    BstNode *root = NULL;

   
    root = insertNode(root, 12);
    root = insertNode(root, 15);
    root = insertNode(root, 5);
    root = insertNode(root, 53);
    root = insertNode(root, 98);
    root = insertNode(root, 0);

   
    std::cout << searchNode(root, 53) << std::endl;
    std::cout << searchNode(root, 42) << std::endl;
    std::cout << searchNode(root, 15) << std::endl;

    
    root = deleteNode(root, 53);
    root = deleteNode(root, 15);

   
    std::cout << searchNode(root, 53) << std::endl;
    std::cout << searchNode(root, 15) << std::endl;
    return 0;
}


    
