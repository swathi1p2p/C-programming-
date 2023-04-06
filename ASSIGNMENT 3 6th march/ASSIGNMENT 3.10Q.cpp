#include <stdio.h>
#include <string.h>

void reverse_string(char* str);

int main() {
    char str[100];
    printf("Enter any String :: ");
    scanf("%s", str);
    printf("The String you entered is :: %s\n", str);
    reverse_string(str);
    printf("The Reverse of the String [ %s ] is :: %s\n", str, str);
    return 0;
}

void reverse_string(char* str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}