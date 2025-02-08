#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int key;
    struct node *left, *right;
};
 
struct node* newNode(int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right =NULL;
    return temp;
}
 
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
 
struct node* insert(struct node* node, int key) {
    if (node == NULL)
        return newNode(key);
 
    if (key < node->key)
        node->left =insert(node->left,key);
    else
        node->right =insert(node->right,key);
 
    return node;
}
 
struct node* minValueNode(struct node* node) {
    struct node* current = node;
 
    while (current && current->left != NULL)
        current =current->left;
 
    return current;
}
 
struct node* deleteNode(struct node* root, int key){
    if (root == NULL)
        return root;
 
    if (key < root->key)
        root->left =deleteNode(root->left,key);
 
    else if (key > root->key)
        root->right =deleteNode(root->right,key);

    else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
 
        struct node* temp =minValueNode(root->right);

        root->key = temp->key;
        root->right =deleteNode(root->right,temp->key);
    }
    return root;
}
 
int main(){
    struct node* root = NULL;
    root = insert(root, 98);
    root = insert(root, 2);
    root = insert(root, 48);
    root = insert(root, 12);
    root = insert(root, 56);
    root = insert(root, 32);
    root = insert(root, 4);
    root = insert(root, 67);
    root = insert(root, 23);
    root = insert(root, 87);
    root = insert(root, 23);
    root = insert(root, 55);
    root = insert(root, 46);
    
 	
    printf("Inorder traversal of the given tree \n");
    inorder(root);
 
    printf("\nInsert 21, 39, 45, 54, 63\n");
    root = insert(root, 21);
    root = insert(root, 39);
    root = insert(root, 45);
    root = insert(root, 54);
    root = insert(root, 63);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    printf("\nDelete 23, 56, 2, 45\n");
    root = deleteNode(root, 23);
    root = deleteNode(root, 56);
    root = deleteNode(root, 2);
    root = deleteNode(root, 45);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
  
    return 0;
}
