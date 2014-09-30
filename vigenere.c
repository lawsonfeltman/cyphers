#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int key_update (string key);

int key_counter = 0;

int main (int argc, string argv[])
{
    if (argc !=2)
    {
        printf("Usage: ./vigenere [alphabetic key]\n");
        return 1;
    }
    
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]) == false)
        {
            printf("Usage: ./vigenere [alphabetic key]\n");
            return 1;
        }
    }
    
    string key = argv[1];
    string phrase = GetString();
            
    for (int i = 0, j = strlen(phrase); i < j; i++) 
    {
        if (isalpha(phrase[i]))
        {
            if (isupper(phrase[i]))
            {
                printf("%c", ((phrase[i] - 'A') + (key[key_counter] - 'A')) % 26 + 'A');
                key_update(key);
            }
            else if (islower(phrase[i]))
            {
                printf("%c", ((phrase[i] - 'a') + (key[key_counter] - 'a')) % 26 + 'a');
                key_update(key);
            }
        } else
        {
            printf("%c", phrase[i]);
        }
    }
    printf("\n");
    return 0;
}

int key_update (string key)
{
    if (key_counter < (strlen(key) - 1))
    {
        key_counter++;
    }
    else
    {
        key_counter = 0;
    }
    return 0;
}
