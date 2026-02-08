/* static allocation of string */
/*
 * Purpose: Demonstrates static allocation of strings and pointer usage in C.
 * Context: Written as part of C fundamentals learning for embedded systems.
 */


#include<stdio.h>
#include<stdlib.h>
int main(){
    char groom[7] = "Swaroop";
    char *s = groom;
    
    printf("%s", s);       /* "%s", *s throws an error because  %s expects pointer pointing to the first character og the string which ends with null character */
    printf("\t%c", *s);    /* But, *s gives only the first character stored in that string */
    return 0;
}
