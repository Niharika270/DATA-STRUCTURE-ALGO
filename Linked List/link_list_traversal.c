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
}
