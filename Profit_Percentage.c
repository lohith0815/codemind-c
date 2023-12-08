#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&b,&a);
    float c=((a-b)*100.0)/b;
    printf("%.2f",c);
}