#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    printf("enter marks of 5 subjects \n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1>33&&s2>33&&s3>33&&s4>33&&s5>33)
    printf("Passed \n");
    else
    printf("failed \n");

    return 0;
}