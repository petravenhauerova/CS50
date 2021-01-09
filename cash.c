#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }   
    while (dollars <= 0);
    int cents = round(dollars * 100);
    int count = 0;
    for (int i = 0; cents >= 25; i++)
    {
        cents = cents - 25;
        count++;
    }
    for (int i = 0; cents >= 10; i++)
    {
        cents = cents - 10;
        count++;
    }
    for (int i = 0; cents >= 5; i++)
    {
        cents = cents - 5;
        count++;
    }
    for (int i = 0; cents >= 1; i++)
    {
        cents = cents - 1;
        count++;
    }
    printf("Number of coins %i\n", count);
}
