#include <stdio.h>

int main() {
   int n, i;
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   int max1 = arr[0];
   int max2 = arr[1];
   for (i = 0; i < n; i++) {
      if (arr[i] > max1) {
         max2 = max1;
         max1 = arr[i];
      } else if (arr[i] > max2 && arr[i] != max1) {
         max2 = arr[i];
      }
   }
   printf("The largest two elements in the array are %d and %d\n", max1, max2);
   return 0;
}