#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    for (int n = 0; n < h; n++)
    {
        for (int l = h - n; l > 1; l--)
        {
            printf(" ");
        }
        for (int i = 0; i <= n; i++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}


