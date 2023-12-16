#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int avg = sum / n;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == avg)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}
