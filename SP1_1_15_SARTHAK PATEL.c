#include<stdio.h>
int main () {
    float fahrenheit,celsius;
    printf("enter the fahrenheit:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit-32) * 5/9;

    printf("convert celsius to fahrenheit is %f\n", celsius);
    return 0;
}
