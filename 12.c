#include<stdio.h>
int main()
{
    char c;
    printf("enter a alphabet : ");
    scanf("%c",&c);
    
    if(c>='A' && c<='Z')
    printf("Uppercase \n");
    if(c>='a' && c<='z')
    printf("Lowercase \n");

    return 0;
}