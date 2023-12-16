
#include <stdio.h>
int main()
{
    int n, i, a[100], last_even = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            last_even = i;
        }
    }
    printf("%d", last_even);
    return 0;
}
