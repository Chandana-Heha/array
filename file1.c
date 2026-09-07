#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *prev;
struct node *next;
};
void insert (struct node **head,int x,int pas){
struct node *newnode = malloc(sizeof(struct node))
if (pas==1){
newnode ->prev=NULL;
newnode ->next=*head;
if (*head=NULL){
       (*head) ->prev = newnode;
*heanewnode;}
}
else{
      struct node *temp=*head;
      for(int i=1;i<pos-1 && temp!=NULL;i++)
                temp=temp ->next;
                if (temp!=NULL){
                newnode ->next=temp ->next;
                newnode ->prev=temp;
                if (temp ->next!=NULL)
                       temp ->next ->prev =newnode;
                temp ->next=newnode;
                else{
                free(newnode);}
             } 
}
void display(){
}
int main(){
struct node*head=NULL;
insert(&head,10,1);
insert(&head,20,1);
insert(&head,20,1);
display(head);
printf("code completes\n");
}
return 0;
 
               
                       
