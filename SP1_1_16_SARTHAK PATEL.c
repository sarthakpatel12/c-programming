#include<stdio.h>
int main () {
    int principal,rate,time,simpleintrest;
    printf("enter the principlal value:");
    scanf("%d",&principal);

    printf("enter the rate of intrest:");
    scanf("%d",&rate);

    printf("enter time:");
    scanf("%d",&time);

    simpleintrest=(principal*rate*time)/100;

    printf("simple intrest = %d\n",simpleintrest);
     return 0;
}

