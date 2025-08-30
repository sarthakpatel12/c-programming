#include <stdio.h>

int main() {
    float grams, kilograms;


    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilograms);


    grams = kilograms * 1000;


    printf("Convert of  kilograms= %f grams.\n",  grams);

    return 0;
}


