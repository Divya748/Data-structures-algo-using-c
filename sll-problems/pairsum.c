#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t,*end;
void main(){
int ch,x,flag=0,sum=0;
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
printf("\nenter  a sum");
scanf("%d",&x);
while(temp){
	end=temp->link;
	while(end){
		if(temp->data+end->data==x){
		printf("(%d,%d)",temp->data,end->data);
		flag=0;
		break;}
	end=end->link;}
temp=temp->link;
}
if(flag==1)
	printf("no pair exist");
}
