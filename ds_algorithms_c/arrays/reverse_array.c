/*
Program: Reverse an Array
Author: Sri
Description:
This program reverses the elements of an array using a simple loop.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int temp;

    // Reversing the array
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Printing reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
