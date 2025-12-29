#include <stdio.h>

int main() {
    int pq[] = {30, 10, 50, 20};
    int n = 4, temp;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (pq[i] < pq[j]) {
                temp = pq[i];
                pq[i] = pq[j];
                pq[j] = temp;
            }

    for (int i = 0; i < n; i++)
        printf("%d ", pq[i]);

    return 0;
}
