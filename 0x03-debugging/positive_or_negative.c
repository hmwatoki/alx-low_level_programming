#include "main.h"
/**
 *ppositive_or_negative - checks if no is + or -
 * @i: The number to be checked.
 *
 * Return: zero
 */
void positive_or_negative(int i) 
{
    if (i > 0) {
        printf("%i is positive\n", i);
    }
    else if (i == 0) {
        printf("%i is zero\n", i);
    }
    else if (i < 0) {
        printf("%i is negative\n", i);
    }
}

    

