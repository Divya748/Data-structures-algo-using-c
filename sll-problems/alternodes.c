#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t;
int c;
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
printf("linked list elements are:\n");
temp=start;
while(temp){
	printf("|%d|-->",temp->data);
	temp=temp->link;}
printf("\nalternate nodes in linked list without printing first node\n");
temp=start;
c=0;
while(temp){
	c++;
	if(c%2==0)
	printf("|%d|--->",temp->data);
	temp=temp->link;}
printf("\nalternate nodes in linked list by printing first node\n");
temp=start;
c=0;
while(temp){
	c++;
	if(c%2!=0)
	printf("|%d|--->",temp->data);
	temp=temp->link;}
}




