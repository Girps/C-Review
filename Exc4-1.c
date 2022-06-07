#include<stdio.h>

/*
    Excercise 4-1: Write the function strrindex(s,t), which returns the position
    of the rightmost occurrence of t in s, or -1 if there is none.
*/

char* strrindex(char *s, char t);

int main()
{
    char name[] = "jesse";
    char* foo = strrindex(name,'e');
    printf("%s",foo);
    return 0;
}

char* strrindex(char* s,char t)
{
    char* ptr = NULL;
    char* cursor = s;
    // Iterate string and get address holding t
    while(*cursor != '\0' && *cursor != EOF)
        {
            if(*cursor == t){ptr = cursor;}
            cursor++;
        }
        // Have address now return
        return ptr;
}

