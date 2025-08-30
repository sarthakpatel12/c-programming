#include <stdio.h>

int main() {
    float grams, kilograms;


    printf("Enter the weight in grams: ");
    scanf("%f", &grams);


    kilograms = grams / 1000;


    printf("Convert of  grams = %f kilograms.\n",  kilograms);

    return 0;
}

