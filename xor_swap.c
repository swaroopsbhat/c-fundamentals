#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("a >>");
    scanf("%d", &a);
    printf("b >>");
    scanf("%d", &b);
    
   a = a^b;
   b = a^b;
   a = a^b;
    
    printf("a:\t%d\nb:\t%d", a, b);
    return 0;
}
