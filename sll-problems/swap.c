#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t,*y;
void main(){
int ch,k;
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
temp=start;
while(temp){
	printf("|%d|-->",temp->data);
temp=temp->link;}
temp=start;
while(temp){
	y=temp->link;
	if(y){
		k=temp->data;
		temp->data=y->data;
		y->data=k;
		temp=temp->link;}
temp=y;}
printf("elements after swap");
temp=start;
while(temp){
	printf("|%d|-->",temp->data);
temp=temp->link;}
}
