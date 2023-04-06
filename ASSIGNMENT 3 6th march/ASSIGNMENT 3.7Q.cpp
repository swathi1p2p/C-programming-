#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int sum = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin); // take input string
    
    for (int i = 0; i < strlen(str); i++) {
        sum += (int) str[i]; // add ASCII value of each character
    }
    
    printf("The sum of ASCII values of all characters in the string is %d.\n", sum);
    
    return 0;
}