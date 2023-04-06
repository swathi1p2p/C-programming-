#include <stdio.h>

// Function to check if a number is prime or not
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("%d = ", num);
    for (int i = 2; i <= num/2; i++) {
        if (isPrime(i)) {
            if (isPrime(num-i)) {
                printf("%d + %d ", i, num-i);
                flag = 1;
            }
        }
    }
    if (!flag) {
        printf("Cannot be expressed as the sum of two prime numbers.");
    }
    return 0;
}