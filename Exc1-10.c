#include <stdio.h>
#include <stdlib.h>

/*
    Ex1-12
    Write a program that prints its input one word per line.
*/


int main()
{
    int nw = 0;
    int c = 0;
    // Check if EOF is reached
    while( (c = getchar() ) != EOF)
    {
        // Check if ' ' is reached if so always place a newline
        if(c == ' ')
            {
                putchar('\n');
            }
        else    // Only print and put char on stream if not space
        {
                putchar(c);
        }

    }


    return 0;
}

