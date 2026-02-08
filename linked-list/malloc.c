#include<stdio.h>
#include<stdlib.h>

 int main()
 {
    int *ptr = (int *)malloc(4);
    if(ptr == NULL)
    {
        printf("Unsuccessful allocation\n");
        exit(1);
    }
    
    printf("Enter the integers:\t");
    scanf("%d", ptr);
    printf("%d", *ptr);
     return 0;
 }