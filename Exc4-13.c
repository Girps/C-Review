#include<stdio.h>

/*
  Excercise 4-13: Write a recursive function reverse(s), which reverses the string s in place
*/

void reverse(char* str, int start, int size);

int main()
{
    char name[] = "Jess";
    reverse(name,0,strlen(name));
    printf("%s",name);
    return 0;
}


/* Char* returning recursive function reverses string */
void reverse(char* str, int start, int size)
{
    if(start >= size)
        {
            return;
        }
    else
        {
            int c = str[--size];
            str[size] = str[start];
            str[start] = c;
            reverse(str,++start,size);
        }
}
