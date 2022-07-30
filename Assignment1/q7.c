#include <stdio.h>

int main()
{
    int n, position;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    position = 0;
    for (int i = position; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    printf("The array after deleting is: ");
    for (int j = 0; j < n - 1; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}