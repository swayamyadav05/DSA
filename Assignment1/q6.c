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
    printf("Enter the position to be deleted: ");
    scanf("%d", &position);
    for (int i = position - 1; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    printf("The array after deleting is: ");
    for (int l = 0; l < n - 1; l++)
    {
        printf("%d ", a[l]);
    }
    return 0;
}