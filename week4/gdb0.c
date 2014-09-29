/**
 * greedy_2.c
 *
 * Nate Hardison <nate@cs.harvard.edu>
 *
 * Uses a greedy algorithm to determine how many coins are necessary to make
 * change for a user-provided dollar amount. Does some slick div/mod math to
 * make the problem super simple!
 *
 */

#include <cs50.h>
#include <math.h>
#include <stdio.h>

#define CENTS_PER_DOLLAR 100
#define QUARTER 25
#define DIME 10
#define NICKEL 5

int main(void)
{
    float dollars;
    do
    {
        printf("O hai! How much change is owed?\n");
        dollars = GetFloat();
    }
    while (dollars < 0);

    int cents = dollars * CENTS_PER_DOLLAR;

    // we start out with zero coins used for change
    int coins = 0;

    // with integer division, we know how many quarters can be used
    coins += cents / QUARTER;

    // we've only got the remainder left!
    cents = cents % QUARTER;

    // do the same for dimes
    coins += cents / DIME;
    cents = cents % DIME;

    // and likewise for nickels
    coins += cents / NICKEL;
    cents = cents % NICKEL;

    // no need to do anything fancy for pennies since x / 1 = x!
    coins += cents;

    // print out the final answer
    printf("%d\n", coins);

    return 0;
}

