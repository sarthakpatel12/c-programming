#include <stdio.h>

int main() {
    int hours;
    int minutes;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;

    printf("conversation of given minutes into hours is %d \n",hours);

    return 0;

}
