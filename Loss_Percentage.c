#include<stdio.h>
int main()
{
    float cp,sp;
    scanf("%f%f",&cp,&sp);
    float lossp=((cp-sp)*100)/cp;
    printf("%.2f",lossp);
}