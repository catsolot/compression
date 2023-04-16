#include "binary-tree.h"

struct node* createNode(int key, char c) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->key = key;
    newNode->c = c;
    return newNode;
}

void insert(struct node* root, int key, char c)
{
    if (key >= root->key) {
        if (root->right == NULL) {
            root->right = createNode(key, c);
        }
        else {
            insert(root->right, key, c);
        }
    }
    else if (key < root->key) {
        if (root->left == NULL) {
            root->left = createNode(key, c);
        }
        else { 
            insert(root->left, key, c);
        }
    }
}

void inorder(struct node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%c ", root->c);
    inorder(root->right);
}
         

int main() {
    struct node* root = createNode(10, 'a');
    insert(root, 11, 'b');
    insert(root, 9, 'c');
    printf("%c\n", root->c);
    printf("%c\t%c\n", root->left->c, root->right->c);
    inorder(root);
}
    
