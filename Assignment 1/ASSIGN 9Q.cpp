#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
    }

    printf("The reverse of the number is %d\n", reverse);

    return 0;
}