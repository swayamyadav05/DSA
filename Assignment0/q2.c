/*
    2. Write a C program using user defined function to do the following:
    a) Split a given character array (string) based on a given character and an
    integer input. The splitting criterion is user specific and may appear multiple
    times:

    Example-
    Input1: “r.kiit24!.jpg” Output1: r r.kiit24! (if input2 is 0)

    Input2: . Output2: kiit24!.jpg jpg (if input2 is 1)
    Input3: 0 or 1
*/

#include <stdio.h>

void display(char str[], char ch, int n)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
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
    char ch;
    printf("Enter the string\n");
    scanf("%s", str);
    printf("Enter the character\n");
    scanf(" %c", &ch);
    int n;
    printf("Enter the integer input\n");
    scanf("%d", &n);
    display(str, ch, n);
}