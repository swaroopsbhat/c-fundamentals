/*creating a lisked_list with 3 nodes 
values to be stored are 14, 53, 98 */
#include<stdio.h>
#include<stdlib.h>

struct node{        
    int data;
    struct node *link;
};
/* self referential structure
    coz a node is nothing but a self referential structure*/

int main()
{
  struct node *head = malloc(sizeof(struct node));               // creating 1st node
  if(head == NULL)
  {
      printf("Unsuccessful allocation\n");
      exit(1);                                                   // abnormal termintaion
  }
  
/* on successful allocation 'malloc' returns void pointer 
having initial address of the mem allocated orelse return 'NULL' */
    
    head->data = 14;
    head->link = NULL;
    
    struct node *current = NULL;                                 // since head is the only way to access the list, creating another pointer to the create 2nd node
    current = malloc(sizeof(struct node));                       // creating 2nd node
    if(current == NULL)
    {
        printf("Unsuccessful allocation\n");
        exit(1);
    }
    current->data = 53;
    current->link = NULL;
    head->link = current;                                       
/* updating the link of the 1st node with the address of the second node */
    
    current = malloc(sizeof(struct node));
    if(current == NULL)
    {
        printf("Unsuccessful allocation\n");
        exit(1);
    }
    current->data = 98;
    current->link =  NULL;
    head->link->link = current;
    
    printf("%d\t", head->data);                 /* printing the node values */
    printf("%d\t", head->link->data);
    printf("%d\t", head->link->link->data);
    
    return 0;
}