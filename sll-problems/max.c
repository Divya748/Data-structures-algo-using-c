#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t;
void main(){
	int i,n,a=0,ch;
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
	printf("|%d|->",temp->data);
	temp=temp->link;}
while(start){
	if(a<start->data){
		a=start->data;
		start=start->link;}
		else{
			start=start->link;}}
printf("the greatest element is |%d|",a);
}
	
