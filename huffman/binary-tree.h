#include <stdlib.h>
#include <stdio.h>

struct node {
    char c;
    int key;
    struct node *left;
    struct node *right;
};

void insert(struct node*, int, char);
struct node* createNode(int key, char c);
void inorder(struct node*);


