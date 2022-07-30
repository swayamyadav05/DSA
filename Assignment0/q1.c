/*
    1. Write a C program using user defined function to do the following:
    a) Split a given character array (string) based on a given integer input. The
    splitting point is a period operator (.):

    Example-
    Input1: “kiit.jpg” Output1: kiit (if input2 is 0)

    Input2: 0 or 1 Output2: jpg (if input2 is 1)
*/


#include <stdio.h>

void display(char str[], int n)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '.')
        {
            if (n == 0)
            {
                for (int j = 0; j < i; j++)
                {
                    printf("%c", str[j]);
                }
            }
            else
            {
                printf("%s", str + i + 1);
                break;
            }
        }
        i++;
    }
}
int main()
{
    char str[100];
    int n;
    printf("Enter the string\n");
    scanf("%s", str);
    printf("Enter the integer input\n");
    scanf("%d", &n);
    display(str, n);
}