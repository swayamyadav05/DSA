#include <stdio.h>
int main()
{
    int n, b;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &b);
    a[n] = b;
    printf("The array after insertion is: ");
    for (int j = 0; j <= n; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}