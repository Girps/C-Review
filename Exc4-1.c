#include<stdio.h>

/*
    Exce
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

