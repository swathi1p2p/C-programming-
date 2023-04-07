#include <stdio.h>

union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union shape s;
    char type;
    float area;

    printf("Enter the type of shape you want to calculate (C for circle, R for rectangle): ");
    scanf("%c", &type);

    if (type == 'C' || type == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);
        area = 3.14159 * s.radius * s.radius;
        printf("The area of the circle is %.2f\n", area);
    } else if (type == 'R' || type == 'r') {
        printf("Enter the length and width of the rectangle separated by a space: ");
        scanf("%f %f", &s.rectangle.length, &s.rectangle.width);
        area = s.rectangle.length * s.rectangle.width;
        printf("The area of the rectangle is %.2f\n", area);
    } else {
        printf("Invalid shape type\n");
    }

    return 0;
}