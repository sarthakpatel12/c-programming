#include <stdio.h>

int main() {
    int dollars, rupees;


    printf("Enter amount in Dollars: ");
    scanf("%d", &dollars);

    rupees = dollars * 48;

    printf("Rupees = %.2d\n", rupees);

    return 0;
}

