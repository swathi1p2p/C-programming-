#include <stdio.h>
#include <stdlib.h>

int minJumps(int arr[], int n) {
    if (n <= 1) return 0; // already at the end or no steps to take
    
    if (arr[0] == 0) return -1; // can't move from starting index
    
    int jumps = 1; // minimum jumps required to reach the end
    int maxReach = arr[0]; // maximum index that can be reached
    int steps = arr[0]; // remaining steps from current index
    
    for (int i = 1; i < n; i++) {
        if (i == n-1) return jumps; // reached the end
        
        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];
        steps--;
        
        if (steps == 0) {
            jumps++;
            if (i >= maxReach) return -1; // can't move forward anymore
            steps = maxReach - i;
        }
    }
    
    return -1; // end is not reachable
}

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int minJumpsRequired = minJumps(arr, n);
    
    if (minJumpsRequired == -1) {
        printf("End is not reachable\n");
    } else {
        printf("Minimum jumps required to reach the end: %d\n", minJumpsRequired);
    }
    
    return 0;
}