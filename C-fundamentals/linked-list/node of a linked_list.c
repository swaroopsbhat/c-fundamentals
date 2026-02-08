//creating a node of a linked_list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}nod;

int main()
{
    struct node *head = NULL;
    head = (struct node *)calloc(1, sizeof(struct node));
    
    head->data = 45;
    head->link = NULL;
    
    printf("%d", head->data);
    
    return 0;
}