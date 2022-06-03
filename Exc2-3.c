#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Function prototype
int htoi(char* str);
int BaseExp(int arg);

/*
    Exercise 2-3: Write the function htoi(s), which converts a string
    Of hexadecimal digits (including optional 0x or 0X)into its equivalent integer
    The allowable digits are 0 through 9, a through f, and A through F.
*/


int main()
{
    char hexStr[15];
    printf("Enter a hexdecimal number to be convert to a signed integer: ");
    scanf("%15s",hexStr);
    int result = htoi(hexStr);
    printf("%d",result);
    return 0;
}

/*Int returning function calculates the decimal value of
    a hexadecimal string */
int htoi(char* str)
{
    // Truncate first two hex digits
    int result = 0;
    int length = 0;
    int res = 16;
    char* ptr = str;
    char* cursor = NULL;
    if(str[1] == 'x' || str[1] == 'X')
        {
            ptr = &str[2];
        }

        // Get size of the string
        while(*ptr != '\0')
            {
                ptr++;
                length++;
            }
        cursor = ptr - length;
    // Traverse the string until beginning is reached
        for(int i = length-1; i >=0;--i )
           {
               // detect digits use ascii values to do this!
            if(cursor[i] >= '0' && cursor[i] <= '9')
                {
                    //subtract and get their int value
                    result += (cursor[i] - '0') * (BaseExp(length - (i+1)));
                } // Detect A-F using ascii
            else if(cursor[i] >= 'A' && cursor[i] <= 'F')
                {
                    result += ( (cursor[i] - 'A') + 10) * (BaseExp(length - (i+1)));
                }
            else if(cursor[i] >= 'a' && cursor[i] <= 'f')
                {
                    result += ( (cursor[i] - 'a') + 10) * (BaseExp(length - (i+1)));
                }
            }

    return result;
}

/*Recursive function returns int of base 16^(arg)*/
int BaseExp(int arg)
{
    // Recursive case if arg is 0 return 1
    if(arg ==  0)
        {
            return 1;
        }
    else if( arg == 1)
        {
            return 16;
        }
    else
        {
            return 16 * BaseExp(arg - 1);
        }
}
