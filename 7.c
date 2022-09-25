#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the coefficients of Quadratic equation \n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    printf("roots are real and distinct\n");
    else if(d<0)
    printf("roots are imaginary \n");
    else
    printf("roots are real and equal");

    return 0;
}