#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}