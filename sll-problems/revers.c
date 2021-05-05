
//reversal of a linked list without link modification
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
void reversal(struct node *);
struct node *start,*temp,*t;
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
reversal(start);
printf("list of elements after reversal\n");
temp=start;
while(temp){
	printf("%d",temp->data);
	temp=temp->link;}
}
void reversal(struct node* start){
struct node *temp;
temp=start;
if(temp->link){
	reversal(temp->link);}
printf("%d",temp->data);
}







