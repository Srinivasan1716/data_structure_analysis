#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

int main() {
    struct Node *head = NULL, *temp, *newNode;

    for (int i = 1; i <= 3; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i * 10;
        newNode->prev = NULL;
        newNode->next = head;

        if (head != NULL)
            head->prev = newNode;
        head = newNode;
    }

    temp = head;
    while (temp) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
