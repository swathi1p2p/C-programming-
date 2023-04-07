#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data data;
    char choice;

    printf("Enter the data type you want to enter (i for integer, f for float): ");
    scanf("%c", &choice);

    if (choice == 'i') {
        printf("Enter an integer value: ");
        scanf("%d", &data.i);
        printf("You entered the integer value: %d\n", data.i);
    } else if (choice == 'f') {
        printf("Enter a float value: ");
        scanf("%f", &data.f);
        printf("You entered the float value: %f\n", data.f);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}