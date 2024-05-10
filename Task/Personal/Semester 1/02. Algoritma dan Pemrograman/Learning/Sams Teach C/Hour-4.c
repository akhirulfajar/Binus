//Exercises Number 1-2 on Hour 4
#include <stdio.h>

int main()
{
    char c1;
    char c2;

    c1 = 'Z';
    c2 = 'z';

    char b1, b2;
    b1 = 72;
    b2 = 104;

    printf ("=== Character based on Numeric Value === \n");
    printf ("The character that has the numeric value of 90 is: %c. \n", c1);
    printf ("The character that has the numeric value of 122 is: %c. \n", c2);

    printf ("\n === Character based on Numeric Value Part 2=== \n");
    printf ("The character that has the numeric value of 72 is: %c. \n", b1);
    printf ("The character that has the numeric value of 104 is: %c. \n", b2);

    printf ("\n === Numeric Value === \n");
    printf ("The numeric value of Z is: %d. \n", c1);
    printf ("The numeric value of z is: %d. \n", c2);
    return 0;
}