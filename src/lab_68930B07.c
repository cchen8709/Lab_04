#include <stdio.h>
#include <string.h>
#include "get_line.h"
#include "essay.h"

#define MAXLEN 1000

const char ESSAY[] = "Ah Love! could you and I with Fate conspire \
To grasp this sorry Scheme of Things entire, \
Would not we shatter it to bits -- and then \
Re-mould it nearer to the Heart's Desire!";

int strindex(const char source[], char pattern[])
{
    int i, j;
    int rightmost = -1;

    if (source == NULL || pattern == NULL || pattern[0] == '\0')
    {
        return -1;
    }

    for (i = 0; source[i] != '\0'; i++)
    {
        for (j = 0;
             pattern[j] != '\0' &&
             source[i + j] != '\0' &&
             source[i + j] == pattern[j];
             j++)
        {
        }

        if (pattern[j] == '\0')
        {
            rightmost = i;
        }
    }

    return rightmost;
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char pattern[MAXLEN] = "";

    printEssay(ESSAY);
    read_pattern_from_stdio( pattern, MAXLEN);
    int pos = strindex(ESSAY, pattern);
    printResult(ESSAY, pos);

    return 0;
}
#endif
// DO NOT change the code above

