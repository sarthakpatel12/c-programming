#include<stdio.h>

int main(){
    float dollars,pounds,rupees;


    printf("enter the amount of dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;
    pounds = rupees / 70;

    printf("converted pounds= %.2f\n", pounds);

    return 0 ;
}

