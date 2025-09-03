#include <stdio.h>

int main() {
    float gross_salary, allowance, deduction, net_salary;


    printf("Enter the gross salary: ");
    scanf("%f", &gross_salary);


    allowance =  gross_salary *10/100;


    deduction =  gross_salary *3/100;


    net_salary = gross_salary + allowance - deduction;

    printf("Total Salary = %f\n", net_salary);

    return 0;
}


