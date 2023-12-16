#include <stdio.h>
int main()
{
    int n, i, a[100], is_even_array = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0)
        {
            is_even_array = 0;
        }
    }
    if (is_even_array)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
