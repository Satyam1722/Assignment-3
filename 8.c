#include<stdio.h>
int main()
{
    int year;
    printf("enter the year \n");
    scanf("%d",&year);
    if(year%100==0 && year%400==0)
    printf("Leap year \n");
    else if(year%4==0 && year%100!=0)
    printf("Leap year \n");
    else
    printf("Non Leap year \n");

    return 0;
}