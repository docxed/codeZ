#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, j, amount, counter = 0, counter_left = 0, flag;
    scanf("%d", &amount);
    char word[amount], keep_sequence[amount];
    int sequence[amount];
    for (i = 0; i < amount; ++i)
    {
        scanf(" %c", &word[i]);
    }

    for (i = 0; i < amount; ++i)
    {
        if (i == 0)
        {
            keep_sequence[0] = word[i];
            sequence[0] = 1;
            ++counter_left;
        }
        else
        {

            flag = 0;
            for (j = 0; j < counter_left; ++j)
            {
                if (word[i] == keep_sequence[j] || tolower(word[i]) == keep_sequence[j] || toupper(word[i]) == keep_sequence[j])
                {
                    sequence[j] += 1;
                    ++flag;
                    break;
                }
            }
            if (flag == 0)
            {
                keep_sequence[counter_left] = word[i];
                sequence[counter_left] = 1;
                ++counter_left;
            }
        }

        ++counter;
    }

    for (i = 0; i < counter_left; ++i)
    {
        printf("%c: %d\n", tolower(keep_sequence[i]), sequence[i]);
    }

    return 0;
}