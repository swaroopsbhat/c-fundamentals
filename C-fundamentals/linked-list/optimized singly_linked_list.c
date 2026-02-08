//creating a node of a linked_list
/* Singly linked_list with only one node
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    float value;
    int data;
    char word;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    
    if(head == NULL)
    {
        printf("Unsuccessfull allocation");
        exit(1);
    }
    
    head->value = 3.48;
    head->data = 43;
    head->word = 'B';
    head->link = NULL;
    
    printf("%f\n", head->value);
    printf("%d\n", head->data);
    printf("%c\n", head->word);
    return 0;
}