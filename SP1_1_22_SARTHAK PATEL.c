#include<stdio.h>

int main() {
    float gross_sales,discount,net_sales;

    printf("enter the gross sales");
    scanf("%f", &gross_sales);

    discount= gross_sales*0.10;

    net_sales = gross_sales - discount;

    printf("final total sale = %.2f\n",net_sales);

    return 0;
}
