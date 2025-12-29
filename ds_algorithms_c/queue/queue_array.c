#include <stdio.h>
#define SIZE 5

int main() {
    int queue[SIZE], front = 0, rear = -1;

    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;

    while (front <= rear)
        printf("%d ", queue[front++]);

    return 0;
}
