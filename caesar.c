#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    int n = strlen(argv[1]);
    for (int i = 0; i < n; i++)
    {
        if (isdigit(argv[1][i]));
        else 
        {
            printf("Usage: ./ceasar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");
    int lenght = strlen(plaintext);
    printf("ciphertext: ");
    for (int i = 0; i < lenght; i++)
    {
        if (plaintext[i] >= 'A' &&  plaintext[i] <= 'Z')
        {
            int up = (((plaintext[i]) - 65) + key) % 26;
            printf("%c", up + 65);
        }
        else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            int k = ((plaintext[i] - 97) + key) % 26;
            printf("%c", k + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}