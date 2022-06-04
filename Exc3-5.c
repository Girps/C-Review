#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    Excercise 3-5 Write a function itob(n,s,b) that converts
    the integer n into a base b character representation in the string s.
    In particular itob(n,s,16) formats n as a hexadecimal integer in s.
*/

void itob(int decimal, char* str, int base);

int main()
{
    char digits[15];
    int number = 0;
    int base = 0;
    //printf("Enter an integer, string of digits and base system to convert integer into: ");


    itob(479,digits,16);
    printf("%s",digits);

    return 0;
}


void itob(int decimal, char* str, int base)
{
    int baseSystem = base;
    int intArg = decimal;
    int exp = 0;
    int remainder = 0;
    int result = 0;
    char digit = 0;
    // If less than return
   if( baseSystem <= 0)
    {
        return;
    }
    int index = 0;
   // Check if int is not zero
   do
    {
        remainder = intArg % baseSystem;
        // Check witch baseSystem
        switch(base)
        {
        case(16): // hexadecimal
                    str[index] = (remainder >= 0 && remainder <= 9) ?
                     remainder + 48 : remainder + 55;
            break;
        case(2): // binary
                    str[index] = remainder + 48;
            break;
        default:  // Incorrect format
            str == NULL;
            break;
        }
        index++;
        intArg /= base;
    }
    while(intArg != 0);


    str[index] = '\0';

    // Now reverse the string
    int size = 0;
    for(char* i = str; *i != '\0';++i){++size;}

    // Now reversie string
    int j = size-1;
    int character = 0;
    for(int i = 0; i < j; i++,j--)
        {
            character = str[j]; // Get last digit
            str[j] = str[i];    // Last get first
            str[i] = character; //First get last
        }

}


