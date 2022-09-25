#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",n);
    if(n>99&&n<1000)
    printf("Three digit number \n");
    else
    printf("Not Three digit number \n");

    return 0;
}