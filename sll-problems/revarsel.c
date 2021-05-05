#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t;
struct node* reversal(struct node *);
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
start=reversal(start);
printf("list of elements after reversal\n");
while(temp){
	printf("%d\n",temp->data);
	temp=temp->link;}
}
struct node* reversal(struct node *start){
struct node *next,*prev,*temp;
temp=start;
prev=NULL;
while(temp){
	next=temp->link;
	temp->link=prev;
	prev=temp;
	temp=next;}
start=prev;
return start;
}














