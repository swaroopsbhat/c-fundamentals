#include<stdio.h>
int main()
{
    int num = 0, i = 0, rem = 0, temp = 0;
    int arr[50] = {0}, div = 0, count = 0;
    printf("Enter a integer starting from non zero digit >>");
    scanf("%d", &num);
    
    /* finding length of the int */
    div = num;
    while(div!=0)
    {
        div = div/10;
        count ++;
    }
    
    for(i=0;i<count;i++)
    {
        rem = num%10;
        num = num/10;
        if(rem == 0)
        {
            arr[temp] = 1;
        }
        else
        {
            arr[temp] = rem;
        }
        temp ++;
    }
    for(i=temp-1;i>=0;i--)
    {
        printf("%d", arr[i]);
    }
        return 0;
}