/*
    3. Write a C program using user defined function to do the following:
    a) A sub-sequence is a sequence that can be derived from another sequence by
    deleting some elements ( possibly zero but not all ) without changing the
    order of the remaining elements. For example: List of sub-sequences of string S = “abc” contains following
    sequences; {a, b, c, ab, bc, ac, abc} where, {mn | m<n}
*/

#include <stdio.h>
#include <math.h>

void generateSubseq(char str[], int n)
{
    int num = 1;
    while (num <= pow(2, n) - 1)
    {
        int temp = num, i = 0;
        while (i < n)
        {
            if ((temp >> i) & 1)
                printf("%c", str[i]);
            i++;
        }
        printf("\n");
        num++;
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", &str);
    int n = 0;
    while (str[n] != '\0')
        n++;
    generateSubseq(str, n);
    return 0;
}