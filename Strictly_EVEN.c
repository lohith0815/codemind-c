#include <stdio.h>
int main()
{
    int n, i, a[100], is_strictly_odd = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0 && i % 2 != 0)
        {
            is_strictly_odd = 0;
        }
    }
    if (is_strictly_odd)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
