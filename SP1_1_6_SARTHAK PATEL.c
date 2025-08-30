#include <stdio.h>

int main() {
    int hours;
    int minutes;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf(" conversation of given hours into minutes is %d \n",minutes);

    return 0;
}
