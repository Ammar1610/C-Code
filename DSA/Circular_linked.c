#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *display(struct node *head){
    struct node *p=head;
    do{
        printf("Element:%d\n",p->data);
        p=p->next;
    }while(p!=head);
    
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data=2;
    head->next=second;
    second->data=4;
    second->next=third;
    third->data=6;
    third->next=fourth;
    fourth->data=8;
    fourth->next=head;
    printf("Circular Linked List:\n");
    head=display(head);
}
  