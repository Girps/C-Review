#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
    Ex1-10
    Write a program to copy its input to its output, replacing each
        string of \t,\b and each backslash by \\
*/


int main()
{
    int c = 0;

    // Check if end of file
    while((c = getchar()) != EOF  )
        {
            if(c == '\t')
                {
                    putchar('\\');
                    putchar('t');
                }
            else if(c == 8) //
                {
                    putchar('\\b');

                }
            else if(c == '\\')
                {
                    putchar('\\');
                }
                putchar(c);
        }


    return 0;
}


