#include <stdio.h>
int main()
{
    int n, max1, max2, min1, min2;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max1 = a[0];
    max2 = a[1];
    min1 = a[0];
    min2 = a[1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max2 = a[i];
        }
        if (a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
    }
    printf("The second minimum is: %d\n", min2);
    printf("The second maximum is: %d\n", max2);
    return 0;
}