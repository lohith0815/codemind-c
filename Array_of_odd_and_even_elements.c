#include <stdio.h>
int main()
{
    int n, i, a[100], odd[100], even[100], odd_count = 0, even_count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0)
        {
            odd[odd_count] = a[i];
            odd_count++;
        }
        else
        {
            even[even_count] = a[i];
            even_count++;
        }
    }
    for (i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }
    for (i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }
    return 0;
}
