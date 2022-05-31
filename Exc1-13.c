#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
    Ex1-13
    Write a program that prints histogram on length of
        word
*/


int main()
{
    int c = 0;  // char
    int count =0; // Count length of word

    // Check if end of file
    while(( c = getchar() )!= EOF)
        {
            // If not a space,new line, tab its a word
            if(c != '\n' && c != ' ' && c != '\t')
                {
                    count++; // inc count
                }
            else    // otherwise a word is complete print histogram
                {
                    for(int i =0; i < count; i++)
                        {
                            printf("*");
                        }
                    printf("\n");
                    count = 0;  // reset to zero
                }
        }


    return 0;
}


