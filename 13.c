#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%6==0)
    printf("number is divisible by 2 & 3 \n");
    else
    printf("number is not divisible by 2 & 3 \n");

    return 0;
}