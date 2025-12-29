#include <stdio.h>

void toh(int n, char from, char to, char aux) {
    if (n == 0) return;
    toh(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    toh(n - 1, aux, to, from);
}

int main() {
    toh(3, 'A', 'C', 'B');
    return 0;
}
