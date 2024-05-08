#include <stdio.h>

int multiply_integer (int x, int y)
{
    int result;
    result= x * y;
    return result;
}

int main ()
{
    int tot;
    tot = multiply_integer(20,18);
    printf ("The multiplication of 20 & 18 is %d. \n", tot);
    return 0;
}