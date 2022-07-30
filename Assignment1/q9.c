#include <stdio.h>
int main()
{
    int n, m, i, j, k;
    printf("Enter the size of 1st array: ");
    scanf("%d", &n);
    printf("Enter the size of 2nd array: ");
    scanf("%d", &m);
    int a[n], b[m];
    printf("Enter 1st array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter 2nd array elements: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[n + m];
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; j < m; j++)
    {
        c[i] = b[j];
        i++;
    }
    printf("\nThe merged array is: ");
    for (k = 0; k < n + m; k++)
    {
        printf("%d ", c[k]);
    }
    return 0;
}