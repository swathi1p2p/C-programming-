#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int size, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // initialize frequency array to -1
    }

    // Count the frequency of each element
    for(i = 0; i < size; i++) {
        count = 1;
        for(j = i+1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // set frequency to 0 to avoid counting it again
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Print the frequency of each element
    printf("\nFrequency of each element in the array:\n");
    for(i = 0; i < size; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}