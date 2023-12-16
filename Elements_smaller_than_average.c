#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, a[100], count = 0, sum = 0;
    float avg;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = floor(sum / n);
    for (i = 0; i < n; i++)
    {
        if (a[i] <= avg)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
