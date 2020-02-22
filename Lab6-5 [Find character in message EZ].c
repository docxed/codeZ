#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[300], word;
    int i, counter = 0, position[300];
    scanf("%[^\n] %c", text, &word);
    for (i = 0; i < 300; ++i)
    {
        if (tolower(word) == tolower(text[i]))
        {
            position[counter] = i + 1;
            ++counter;
        }
    }

    if (counter > 0)
    {
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", counter, word);
        for (i = 0; i < counter; ++i)
        {
            if (i == counter - 1)
                printf("%d\n", position[i]);
            else
                printf("%d, ", position[i]);
        }
    }
    else
    {
        printf("Not found.");
    }

    return 0;
}