/* Dynamic allocation of string */
/*
 * Purpose: Demonstrates static allocation of strings and pointer usage in C.
 * Context: Written as part of C fundamentals learning for embedded systems.
 */


#include<stdio.h>
#include<stdlib.h>
int main()
{
    char* name = malloc(8*sizeof(char));   /* always allocate +1 byte for null character while allocating mem dynamically for string */
    scanf("%7s", name);                   /* this is to store only 7 bytes of date to eliminate buffer overflow / crash / overwrite */
    
    printf("%s", name);      /* printf("%.4s", name); */     /* printf("%7s", name); */ 
    free(name);             /* to eliminate memory leak */
    return 0;
}
