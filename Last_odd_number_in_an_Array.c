#include <stdio.h>
int main()
{
    int n, i, a[100], last_odd = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0)
        {
            last_odd = a[i];
        }
    }
    printf("%d", last_odd);
    return 0;
}
