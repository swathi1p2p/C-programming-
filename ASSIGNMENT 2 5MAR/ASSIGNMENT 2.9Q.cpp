#include <stdio.h>

int main() {
  int arr[100], n, i, j, temp;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Bubble sort
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("\nThe array in descending order:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}