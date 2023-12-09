#include<stdio.h>
int main()
{
    int x1,x2,y1,y2,z1,z2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    z1=x1+y1;
    z2=x2+y2;
    if(z1<z2)
    printf("%d",z1);
    else
    printf("%d",z2);
}