#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter length of the sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
    printf("Triangle is valid \n");
    else
    printf("Triangle is not valid \n");


    return 0;
}