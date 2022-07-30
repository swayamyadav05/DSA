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
    for (int i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = b;
    printf("The array after insertion is: ");
    for (int l = 0; l <= n; l++)
    {
        printf("%d ", a[l]);
    }
    return 0;
}