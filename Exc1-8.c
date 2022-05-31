#include <stdio.h>
#include <stdlib.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size*/

double celCoversion (double arg);

int main()
{
/* count number of lines in input */

    int count = 0;
    int c = 0;
    while((c = getchar()) != EOF)
        {
            if(c == '\n' || c == ' ' || c == '\t')
            {
             count++;
            }

        }

        printf("Number of new special chars: %d",count);

    return 0;
}

// Returns float value representing celisus temp, float arg is farenheit
double celCoversion(double farhen)
{
    double result = 0;
    result = ((double)5/(double)9) * (farhen - (double)32);
    return result;
}
