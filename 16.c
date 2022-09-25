#include<stdio.h>
int main()
{
    char c;
    printf("enter a character : ");
    scanf("%c",&c);

    if(c>='A' && c<='Z')
    printf("Uppercase \n");
    else if(c>='a' && c<='z')
    printf("Lowercase \n");
    else if(c>='0' && c<='9')
    printf("digit \n");
    else
    printf("special character \n");

    return 0;
}