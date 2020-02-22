#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char list[20][20], keeper[60];
    int i, j, flag;
    for (i = 0; i < 20; ++i)
    {
        scanf(" %[^\n]", list[i]);
    }
    for (i = 0; i < 20; ++i)
    {
        for (j = 0; j < strlen(list[i]); ++j)
            list[i][j] = tolower(list[i][j]);
        for (j = 0; j < strlen(list[i]); ++j)
        {
            if (j == 0 || flag == 1)
            {
                list[i][j] = toupper(list[i][j]);
                flag = 0;
            }
            if (isspace(list[i][j]))
                ++flag;
        }
    }
    for (i = 0; i < 20; ++i)
    {
        for (j = i + 1; j < 20; ++j)
        {
            if (strcmp(list[i], list[j]) > 0)
            {
                strcpy(keeper, list[i]);
                strcpy(list[i], list[j]);
                strcpy(list[j], keeper);
            }
        }
    }

    for (i = 0; i < 20; ++i)
    {
        printf("%s\n", list[i]);
    }
    return 0;
}