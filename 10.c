#include<stdio.h>
int main()
{
    float cp,sp,net;
    printf("enter the Cost price and Selling price \n");
    scanf("%f%f",&cp,&sp);
    if(sp>cp){
        net=sp-cp;
        printf("profit percentage is %f \n",(net/cp)*100);
    }
    else{
          net=cp-sp;
        printf("loss percentage is %f \n",(net/cp)*100);
    }

    return 0;
}