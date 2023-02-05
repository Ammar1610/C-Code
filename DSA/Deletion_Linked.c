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
struct node *beggining(struct node *head){
    struct node *p=head;
    head=head->next;
    free(p);
    return head;
}
struct node *index(struct node *head,int index){
    struct node *p = head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct node *q=p->next;
    p->next=q->next;
    free(q);
    return head;
}
struct node *end(struct node *head){
    struct node *p=head;
    struct node *q = p->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct node *afternode(struct node *head,struct node *node){
    struct node *p=node->next;
    node->next=p->next;
    free(p);
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
    // printf("Deletion at first\n");
    // head = beggining(head);
    // traveral(head);
    // printf("Deletion at index\n");
    // head =index(head,2);
    // traveral(head);
    // printf("Deletion at end\n");
    // head=end(head);
    // traveral(head);
    printf("Deletion after node:\n");
    head =afternode(head,second);
    traveral(head);
    return 0;
}