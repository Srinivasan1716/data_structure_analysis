#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        root = (struct Node*)malloc(sizeof(struct Node));
        root->data = data;
        root->left = root->right = NULL;
        return root;
    }
    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

void inorder(struct Node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int arr[] = {50, 30, 20, 40, 70, 60, 80};

    for (int i = 0; i < 7; i++)
        root = insert(root, arr[i]);

    printf("BST Inorder Traversal: ");
    inorder(root);

    return 0;
}
