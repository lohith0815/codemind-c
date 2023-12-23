#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;1<=i;i--)
    {
        for(j=i;1<=j;j--)
        {
            printf("* ");
        }
        printf("
");
    }
}