/* creating a node of a single linked_list**/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    char letter;
    float value;
    struct node *link;
    
};
int main()
{
    struct node *head = malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unsuccessful allocation-> mem not available");
        exit(1);
    }
    
    head->data = 14;
    head->letter = 'A';
    head->value = 3.14;
    printf("%d\n", head->data);
    printf("%f\n", head->value);
    printf("%c\n", head->letter);
    
}