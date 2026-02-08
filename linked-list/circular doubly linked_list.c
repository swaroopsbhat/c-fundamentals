/* Circular Doubly linked_list having 2 nodes */
/* data stores are 45, 46, 47 */
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;  
    struct node *next;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));  // 1stnode
    head->prev = NULL;
    head->data = 45;
    head->next = NULL;
    
    struct node *current =  malloc(sizeof(struct node));            // 2nd node
    current->prev = NULL;
    current->data = 46;
    current->next = NULL;
    current->prev = head;
    head->next = current;
    
    current = malloc(sizeof(struct node));                         // 3rd node
    current->prev = NULL; 
    current->data = 47;
    current->next = NULL;
    head->next->next = current;
    current->prev = head->next;
    /* making Doubly into circular doubly */
    head->prev = head->next->next;
    head->next->next->next = head;
    
    printf("%d\t", head->data);
    printf("%d\t", head->next->data);
    printf("%d\t", head->next->next->data);
    
    return 0;
}