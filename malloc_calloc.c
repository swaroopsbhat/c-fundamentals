#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i;
    printf("Enter the number of integers:\t");
    scanf("%d", &n);
    int *ptr = calloc(n, sizeof(int));
    
    for(i=0;i<n;i++)
    {
        printf("Enter the integer:\t");
        scanf("%d", ptr + i);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d", *(ptr + i));
    }
    free(ptr);
    return 0;
}