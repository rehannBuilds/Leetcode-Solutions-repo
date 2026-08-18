#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
    struct node*prev;

};
struct node*CreateNode(int a){
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=a;
    ptr->next=NULL;
    ptr->prev=NULL;
};
void display(struct node*head){
    printf("the number is: %d",head->data);
}
void inorder(struct node*root){
    if(root!=NULL){
        inorder(root->prev);
        printf("%d  ",root->data);
        inorder(root->next);
        
    }
}

int main (){
    //creating the nodes
    struct node*p1=CreateNode(5);
    struct node*p2=CreateNode(7);
    struct node*p3=CreateNode(9);
    struct node*p4=CreateNode(1);
    struct node*p5=CreateNode(3);
    struct node*p6=CreateNode(17);
    struct node*p7=CreateNode(71);
    struct node*p8=CreateNode(91);
    struct node*p9=CreateNode(18);
    struct node*p10=CreateNode(33);
    //linking and making a tree
    p1->next=p3;
    p1->prev=p2;
    p2->prev=p4;
    p2->next=p5;
    p3->next=p7;
    p3->prev=p6;
    p6->next=NULL;
    p6->prev=p8;
    p7->next=p10;
    p7->prev=p9;
    //now printing tree in various orders
    inorder(p1);
    



}
