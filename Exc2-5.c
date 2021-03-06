#include <stdio.h>
#include <stdlib.h>

/*
    Exercise 2-5: Write function any(s1,s2), which returns the first
    location in the string s1 where any chracter from the string s2 occurs, or -1 if s2
    Contains no characters from s2. (The standard library function strpbrk does the same
    job but returns a pointer to the location.)*/

char* any(char* s1, char* s2);

int main()
{
    char str[] = "Jesse";
    char rts[] = "e";

    char* ptr = any(str,rts);
        // Recall %s expects a char pointer not literal char!
        (ptr == NULL) ? printf("Not found") : printf("%s",ptr);

    return 0;
}


// Char* pointer returning function looks for the first
// Character in s1 that is found in s2
char* any(char* s1, char* s2)
{
    for(int i =0; s1[i] != '\0';++i)
        {
            for(int x = 0;s2[x] !='\0';++x )
                {
                    if(s1[i] == s2[x])
                    {
                        return &s1[i];
                    }

                }
        }
        return NULL;
}


