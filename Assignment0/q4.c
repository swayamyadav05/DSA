/*
    4. Write a C program using user defined function to do the following:
    a) Lemmatization is the grouping together of different forms of the same word.
*/

#include <stdio.h>
void lemmatization(char str1[20], char str2[20], char str3[20])
{
    int i = 0;
    printf("The common word is: ");
    while (str1[i] != '\0' && str2[i] != '\0' && str3[i] != '\0')
    {
        if (str1[i] == str2[i])
        {
            if (str1[i] == str3[i])
            {
                printf("%c", str1[i]);
            }
        }
        i++;
    }
}

int main()
{
    char str1[20], str2[20], str3[20];
    scanf("%s %s %s", str1, str2, str3);
    lemmatization(str1, str2, str3);
}