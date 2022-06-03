#include <stdio.h>
#include <stdlib.h>

/*
    Exercise 2-10: Rewrite lower function, with a conditional expression
        instead of if else */

int lower(int c);

int main()
{
    printf("%c",lower('A'));

    return 0;
}

// Convert upper case character and returns ascii of lower char
int lower(int c )
{
    // Return is a statement not an expression
    return (c >= 'A' && c <= 'Z') ? (c+ 'a' - 'A') : c;
}


