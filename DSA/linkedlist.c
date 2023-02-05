#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traveral(struct node *ptr){
    while(ptr!=NULL){
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;}
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth= (struct node *)malloc(sizeof(struct node));
    head->data=2;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=fourth;
    fourth->data=5;
    fourth->next=NULL;
    traveral(head); 
    return 0;
}