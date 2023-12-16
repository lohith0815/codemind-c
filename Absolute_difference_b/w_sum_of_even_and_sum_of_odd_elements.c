#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, even_sum = 0, odd_sum = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
        {
            even_sum += arr[i];
        }
        else
        {
            odd_sum += arr[i];
        }
    }
    printf("%d", abs(even_sum - odd_sum));
    return 0;
}
