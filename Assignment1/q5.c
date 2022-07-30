#include <stdio.h>
int main()
{
    int n, b, position;
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
    printf("Enter the position of the element to be inserted: ");
    scanf("%d", &position);

    for (int i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }
    a[position] = b;
    printf("The array after insertion is: ");
    for (int l = 0; l <= n; l++)
    {
        printf("%d ", a[l]);
    }
    return 0;
}