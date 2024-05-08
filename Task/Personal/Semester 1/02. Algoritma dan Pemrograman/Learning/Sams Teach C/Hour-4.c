#include <stdio.h>

int main()
{
    char c1;
    char c2;

    c1 = 'A';
    c2 = 'a';

    printf ("=== Character based on Numeric Value === \n");
    printf ("The character that has the numeric value of 65 is: %c. \n", c1);
    printf ("The character that has the numeric value of 97 is: %c. \n", c2);

    printf ("=== Numeric Value === \n");
    printf ("The numeric value of A is: %d. \n", c1);
    printf ("The numeric value of a is: %d. \n", c2);
    return 0;
}