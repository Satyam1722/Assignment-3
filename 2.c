#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n%5==0)
    printf("divisible by 5\n");
    else
    printf("Not divisible by 5\n");
    
    return 0;
}