#include <stdio.h>
#include <stdlib.h>
struct node{
        int data;
        struct node *next;
    };
void display(struct node *pt){
    while (pt!=NULL)
    {
        printf("Element is : %d",pt->data);
        pt=pt->next;
    }
    

}

int main(){
    //defining the nodes 
    struct node *head;
    struct node *second;
    struct node *third;
    //allocating dynamic memory
    head= (struct node*)malloc(sizeof(struct node));
    second= (struct node*)malloc(sizeof(struct node));
    third= (struct node*)malloc(sizeof(struct node));
    //linking
    head->data=45;
    head->next=second;
    second->data=65;
    second->next=third;
    third->data=98;
    third->next=NULL;
    
    display(head);

    return 0;
}