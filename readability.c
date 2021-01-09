#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    float letter = 0;
    int word = 1;
    float sentence = 0;
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            letter++;
        }
        if (text[i] == ' ')
        {
            word++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence++;
        }
    }
    float l = (letter / word) * 100;
    float s = (sentence / word) * 100;
    float index = 0.0588 * l - 0.296 * s - 15.8;
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.lf\n", round(index));
    }
}