#include <stdio.h>

#define SIZE 10 // size of the array

void reverse_array(int arr[], int size);

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // print the original array
    printf("Original array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    // reverse the array
    reverse_array(arr, SIZE);

    // print the reversed array
    printf("\nReversed array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void reverse_array(int arr[], int size) {
    int temp;

    // loop through half of the array and swap elements
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}