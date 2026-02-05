#include <stdio.h>
#include <stdlib.h>

// structure of a tree node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int countLeafNodes(struct node* root) {
    if (root == NULL)
        return 0;

    // postorder: left + right + root
    int leftLeaves = countLeafNodes(root->left);
    int rightLeaves = countLeafNodes(root->right);

    // check if current node is a leaf
    if (root->left == NULL && root->right == NULL)
        return 1;

    return leftLeaves + rightLeaves;
}

int main() {
//creating nodes

    struct node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    int leafCount = countLeafNodes(root);
    printf("Number of leaf nodes = %d", leafCount);

    return 0;
}
