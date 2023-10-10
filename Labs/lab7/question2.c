/*
name:Muhammad Abbas
date: 10/10/2023
purpose: rotating an array d positions forward
*/

#include <stdio.h>

int main() {
    int N, d;

    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    // Ask the user to populate the array
    printf("Enter %d elements for the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask the user for the number of positions to rotate
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    // Handle the case where d is greater than the array size
    d = d % N;

    int temp;

    for (int i = 0; i < d; i++) {
        // Store the first element of the array
        temp = arr[0];

        // Shift all elements to the left by one position
        for (int j = 0; j < N - 1; j++) {
            arr[j] = arr[j + 1];
        }

        // Place the first element at the end
        arr[N - 1] = temp;
    }

    printf("Rotated array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
