#include <stdio.h>
#define SIZE 5

int main() {
    int cq[SIZE], front = 0, rear = 0;

    cq[rear++] = 10;
    cq[rear++] = 20;
    cq[rear++] = 30;

    for (int i = front; i < rear; i++)
        printf("%d ", cq[i]);

    return 0;
}
