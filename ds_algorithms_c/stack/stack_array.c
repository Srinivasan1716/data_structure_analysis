#include <stdio.h>
#define SIZE 5

int stack[SIZE], top = -1;

int main() {
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    while (top >= 0)
        printf("%d ", stack[top--]);

    return 0;
}
