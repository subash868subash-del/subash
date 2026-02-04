#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node* create Node(int value){
    structNode* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void preorder(struct node* root){
    if(root == NULL)
    return;
    printf("%d", root->data);
    preorder (root->left);
    preorder(root->right);
}
int main(){
    struct Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);
    printf("value at root->left->right = %d\n",node->left->right->data);
    return 0;
}