/*
Decription:
A program that prompts the user to the length of his or her shower in minutes (as a positive integer, re-prompting
as needed) and then prints the equivalent number of bottles of water (as an integer).
1-minutes shower = 12 bottles of water. (1.5 * 128 / 16 = 12)
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    do
    {
        printf("minutes: ");
        x = GetInt();
    }
    while(x < 1);

    printf("bottles: %d\n", x*12);
    return 0;
}
