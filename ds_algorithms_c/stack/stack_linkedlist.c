#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *top = NULL, *temp;

    for (int i = 1; i <= 3; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = i * 10;
        temp->next = top;
        top = temp;
    }

    while (top) {
        printf("%d ", top->data);
        temp = top;
        top = top->next;
        free(temp);
    }

    return 0;
}
