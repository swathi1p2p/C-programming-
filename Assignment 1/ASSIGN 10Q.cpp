#include <stdio.h>

int main() {
    int decimalNum, binaryNum = 0, i = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    while(decimalNum != 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * i;
        i *= 10;
    }

    printf("Binary equivalent is: %d", binaryNum);

    return 0;
}