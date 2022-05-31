#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
    Ex1-15
    Rewrite the temperature conversion program of section 1.2
    To use a function for conversion
*/

// Function protoype
double conversionFarhen(double cel);

int main()
{
    // Print conversion
    printf("%.2f",conversionFarhen(0));
    return 0;
}

/*Double returning function, takes double as arugement and returns by value conversion of cel to farhen*/
double conversionFarhen(double cel)
{
    double result = 0;

    result = ((double)5/ (double )9)* (cel -32);

    return result;
}




