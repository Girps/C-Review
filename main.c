# include<stdio.h>

void myStrcpy(char* dst,char* src);
char* myStrstr(char* src, char* target);
char* myStrchr(char* src, char literal);
void mystrCat(char* des,char* src);
int myStrlen(char* src);
int myStrcmp(char* des, char* src);

int main()
{



    // With C strings it is the programmers responsibilty to keep track of the size of our arrays
        char greet[] = {"hello"};
        char cpy[6];
        char w[] = {" world!"};

        char a[] = {"Hello"};
        char b[] = {"hello"};

        // Strcpy function copies chars from greet to cpy array
        // It does this by taking a pointer from the src and the destination

        myStrcpy(cpy,greet);
        mystrCat(greet,w); // Concatenates string from src to des (des,src)

        // Should print hello
        printf("%s\n",cpy);
        printf("%s\n",greet);
        printf("%d\n",myStrlen(w));
        printf("%d",myStrcmp(a,b));

        char cmp[] = {"Jesse"};
        char tar = 'e';
        char s2 [] = {"esse"};

        printf("%c\n",myStrchr(cmp,tar));
        printf("%s",myStrstr(cmp,s2));

    return 0;
}

/* Void function copies contents of src pointer to dst pointer*/
void myStrcpy(char* des, char* src)
{
    // first byte address of src
    char* cursor = src;
    int count = 0;
    while(*cursor != '\0' )
        {
            cursor++; // traverse
            count++; // get size
        }
    // have size of the string now copy contents
    for(int i =0; i < count; i++)
        {
            *(des + i) = *(src + i);
        }
}


/* Implement strcat function, copy src bytes to end of src bytes */
void mystrCat(char* des,char* src)
{
    // Get end of des
    char* cursor = des;
    char* target = src;
    while(*cursor != '\0')
        {
           cursor++;

        }

    // have the end of des now copy data from src
    while(*target != '\0')
        {
            *cursor = *target;
            cursor++;
            target++;
        }
}

/* Int returning function traverse char array and returns number of characters before null*/
int myStrlen(char* src)
{
    int count = 0;
    // Traverse and count number of bytes before NULL terminator
    while(*src != '\0')
        {
            src++;
            count++;
        }

    return count;
}

/* int implement strcmp function, returns int base on conditions */
int myStrcmp(char* des, char* src)
{
    int count_Des = 0;
    int count_Src = 0;
    // Get size of each array
    // Size of des
    char* cursor = des;
    while(*cursor != '\0' )
        {
            cursor++;
            count_Des++;
        }
        char* target = src;
        while(*target != '\0')
            {
                target++;
                count_Src++;
            }
    // Have sizes get the difference
    int diff = count_Des - count_Src;
    // Compare differences to 0
    if(diff > 0)
        {
            return 1;
        }
    else if(diff < 0)
        {
            return -1;
        }
    else    // Now compare to see if chars match
    {
        while(*des != '\0')
            {
                // if they don't match return an int
                if(*des > *src) { return 1;}
                else if(*des < *src){ return -1; }
                des++;
                src++;
            }
            // return 0 if same
        return 0;
    }
}
/*char* returning function traverse list to find address contain same value as literal
    reimplementing strchr function*/
char* myStrchr(char* src, char literal)
{
    while(*src != '\0')
        {
            // if found return the pointer to match
            if(*src == literal){return *src;}
                src++;
        }
    // if not found return null
    return NULL;
}

/*char* returning function, looks for target in src string and
    returns first byte address of target located in src */
char* myStrstr(char* src, char* target)
{
    if(target == NULL)
        {
            return src;
        } // traverse arrays
    else
        {
            // Get size of target data
            int size = 0;
            while(*target != '\0')
                {
                    size++;
                    target++;
                }

                target-=size; // get pointer back

            // local variable number of bytes target is located in src
            int offset = 0;
            int count = size;
            char* cursor = target;
            while(src != '\0')
                {
                    // check if array data match
                    if(*src == *cursor)
                        {
                            cursor++;
                            count--;
                        }
                    else{
                            count = size;
                            cursor = target;
                        }
                        // if size is 0 return pointer
                        if(count == 0) return src- (size-1);

                    // traverse and inc offset
                    src++;

                }
                // if not found return null
                return NULL;
        }
}

