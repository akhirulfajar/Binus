#include <stdio.h>

int main()
{
    int ch;

    ch = 65; /* the numeric value of A*/
    printf("The character that has numeric value of 65 is: \n");

    /* putc is a way to output a print or display character to screen */
    putc(ch, stdout);
    return 0;
}