#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Only give me one number key in addition to my program name, thank you\n");
        return 1;
    }
    else
    {
        int key = atoi(argv[1]);
        string phrase = GetString();
        
        for (int i = 0, j = strlen(phrase); i < j; i++) 
        {
            if (isalpha(phrase[i]))
            {
                if (isupper(phrase[i]))
                {
                    printf("%c", ((phrase[i] - 'A') + key) % 26 + 'A');
                }
                else if (islower(phrase[i]))
                {
                    printf("%c", ((phrase[i] - 'a') + key) % 26 + 'a');
                }
            } else
            {
                printf("%c", phrase[i]);
            }
        }
    }
    printf("\n");
    return 0;
}

