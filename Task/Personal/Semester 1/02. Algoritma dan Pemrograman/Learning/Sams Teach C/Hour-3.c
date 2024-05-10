#include <stdio.h>

//this multiply_integer is a outside function that get called from the main to do the multiply calculation
//it has 2 parameter input, which is int x and y
int multiply_integer (int x, int y)
{
    int result;
    result= x * y;
    return result;
}

int main ()
{
    int tot;

    //and here when the outside function get called, with defined parameter, 20 for x, 18 for y
    //then the outside function process it and assign it to tot variable
    tot = multiply_integer(20,18);
    printf ("The multiplication of 20 & 18 is %d. \n", tot);
    return 0;
}