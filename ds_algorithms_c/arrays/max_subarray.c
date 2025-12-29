#include <stdio.h>

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;
    int maxSum = arr[0], currSum = arr[0];

    for (int i = 1; i < n; i++) {
        currSum = (arr[i] > currSum + arr[i]) ? arr[i] : currSum + arr[i];
        maxSum = (currSum > maxSum) ? currSum : maxSum;
    }

    printf("Maximum Subarray Sum = %d\n", maxSum);
    return 0;
}
