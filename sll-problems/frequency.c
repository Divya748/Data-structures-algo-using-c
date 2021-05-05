
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t;
void main(){
int ch,val,c;
printf("enter choice");
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
	printf("%d",temp->data);
	temp=temp->link;}
printf("\nenter a value");
scanf("%d",&val);
temp=start;
c=0;
while(temp){
	if(temp->data==val){
		c=c+1;}
	temp=temp->link;}
printf("the frequency of a given value in the list is|%d|-->%d",val,c);
}





