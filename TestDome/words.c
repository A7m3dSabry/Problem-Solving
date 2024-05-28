/*

Result = 100%

*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int cmp(const void * str1, const void * str2)
{

    // str2 first to make the sorting descending
    return strcmp(*(char **)str2,*(char **)str1);
}

void sort_words(char *words[], int count)
{

    qsort(words,count, sizeof(words[0]),cmp);
}

#ifndef RunTests
int main()
{
    char *words[] = { "cherry", "orange", "apple" };

    sort_words(words, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("%s ", words[i]);
    }
}
#endif