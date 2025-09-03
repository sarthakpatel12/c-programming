#include <stdio.h>

int main() {
    float length, area, perimeter;


    printf("Enter the length of the square's side: ");
    scanf("%f", &length);


    area = length * length;
    perimeter = 4 * length;


    printf("Area of the square = %f\n", area);
    printf("Perimeter of the square = %f\n", perimeter);

    return 0;
}


