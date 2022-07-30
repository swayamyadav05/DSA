#include <stdio.h>

int main()
{
    int n, max, min;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Minumum element is: %d\n", min);
    printf("Maximum element is: %d\n", max);
    return 0;
}