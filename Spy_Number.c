#include<stdio.h>
int main()
{
    int n,t,sum=0,pro=1,d;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        d=t%10;
        sum+=d;
        pro*=d;
        t/=10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}