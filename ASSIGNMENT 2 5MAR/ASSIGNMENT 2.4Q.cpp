#include <stdio.h>

int main() {
   int arr[] = {4, 1, 2, 10, 5, 7, 9, 3, 6, 8};
   int n = sizeof(arr) / sizeof(arr[0]);
   int max_diff = arr[1] - arr[0];
   int min_element = arr[0];

   for (int i = 1; i < n; i++) {
      if (arr[i] - min_element > max_diff) {
         max_diff = arr[i] - min_element;
      }
      if (arr[i] < min_element) {
         min_element = arr[i];
      }
   }

   printf("Maximum difference is %d", max_diff);
   return 0;
}