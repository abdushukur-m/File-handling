#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[150], longest[50], shortest[50];
    int count = 0, max = 0, min = 50, i, j, indexshort = 0, indexlong = 0, length;

    FILE* fp1;
    fp1=fopen("temp.txt", "r");
    while(fgets(string, 99, fp1)){

    length = strlen(string);
    indexlong = 0;
    indexshort = 0;
    /* Finding length of longest word and starting index */
    for (i = 0; i < length; i++)
    {
        if (isalpha(string[i]))
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
                indexlong = i - max;
            }
            if (count < min)
            {
                min = count;
                indexshort = i - min;
            }
            
            count = 0;
        }
    }
    /* Checking if last word is longest */
    if (count > max)
    {
        max = count;
        indexlong = length - max;
    }
    /* Using length and indexlong copying longest word */
    j = 0;
    for (i = indexlong; i < indexlong + max; i++)
    {
        longest[j] = string[i];
        j++;
    }
    if (count < min)
    {
        min = count;
        indexshort = length - min;
    }
    /* Using length and indexlong copying shortest word */
    j = 0;
    for (i = indexlong; i < indexlong + max; i++)
    {
        shortest[j] = string[i];
        j++;
    }
    /* Inserting NULL character to terminate string */
    longest[j] = '\0';
    shortest[j] = '\0';
    printf("Longest word - %s\tLength - %d\n", longest, max);
    max=0;
    min=50;
    length=0;
    count=0;
    memset(longest, 0, 30);
    }
    return 0;
}