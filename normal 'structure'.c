#include<stdio.h>
#include<stdlib.h>

struct list{
    int data;
    char letter;
}l;
int main()
{
    //struct list l;
    l.data = 45;
    l.letter = 'A';
    
    printf("%d", l.data);
    printf("\n%c", l.letter);
    
    return 0;
}