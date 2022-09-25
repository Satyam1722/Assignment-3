#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n>0)
    printf("Positive \n");
    else if(n<0)
    printf("Negative \n");
    else
    printf("zero \n");

    return 0;
}