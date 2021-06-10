#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

void linklisttraversal(struct node *ptr){

    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node * insertatfirst(struct node * head, int data){
struct node * ptr=(struct node*)malloc(sizeof(struct node));
ptr->next=head;
ptr->data=data;
return ptr;
}


struct node * insertatindex(struct node * head, int data,int index){
struct node * ptr=(struct node*)malloc(sizeof(struct node));
struct node * p= head;
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

struct node * insertatend(struct node * head, int data){
struct node * ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
struct node * p= head;
while(p->next!=NULL){
    p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;
}

struct node * insertafternode(struct node * head, struct node * prevnode, int data){
struct node * ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=prevnode->next;
prevnode->next=ptr;

return head;
}

int main(){
struct node *head;
struct node *second;
struct node *third;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
//link first and second
head->data=7;
head->next=second;
//link first and second
second->data=11;
second->next=third;
//link first and second
third->data=56;
third->next= NULL;

linklisttraversal(head);
printf("\n");
head=insertatfirst(head,6);
linklisttraversal(head);
printf("\n");
head=insertatindex(head,99,2);
linklisttraversal(head);
printf("\n");
head=insertatend(head,55);
linklisttraversal(head);
printf("\n");
head=insertafternode(head,second,22);
linklisttraversal(head);
}

