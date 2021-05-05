
//reversal of a linked list by modification of a link by using recursion

#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node* rreversal(struct node *);
struct node *start,*temp,*t,*head;
void main(){
int ch;
printf("enter a choice");
scanf("%d",&ch);
while(ch!=0){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter a value");
	scanf("%d",&temp->data);
	temp->link=NULL;
if(start==NULL){
	start=temp;}
else{
	t=start;
	while(t->link){
		t=t->link;}
	t->link=temp;}
printf("enter a choice");
scanf("%d",&ch);}
head=rreversal(start);
printf("list of elements after reversal\n");
temp=head;
while(temp){
	printf("%d",temp->data);
	temp=temp->link;}
}
struct node* rreversal(struct node* temp){
struct node *head;
if(temp==NULL||temp->link==NULL){
	head=temp;
	return head;}
head=rreversal(temp->link);
temp->link->link=temp;
temp->link=NULL;
return head;}





