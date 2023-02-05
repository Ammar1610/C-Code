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
struct node *beggining(struct node *head, int data){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node *between(struct node*head,int index,int data){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node *end(struct node *head,int data){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(p->next!=NULL){
        p=p->next;
        i++;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    return head;
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
    long int x=1111111;
    printf("%ld\n",x);
    head = beggining(head,12);
    traveral(head);
    printf("%ld\n",x);
    // int a,b;
    printf("For insertion in between:\n");
    // printf("Enter starting node:");
    // scanf("%d",&a);
    // printf("Enter ending node:");
    between(head,1,99);
    traveral(head);
    printf("Insertion at end:\n");
    end(head,44);
    traveral(head);
    return 0;
}