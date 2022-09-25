#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%3==0)
    printf("divisible by 3 \n");
    if(n%7==0)
    printf("divisible by 7 \n");
    else
    printf("not divisible by 7 and 3 \n");


    return 0;
}