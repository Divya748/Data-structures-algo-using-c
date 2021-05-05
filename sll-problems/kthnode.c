#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t,*bf;
void main(){
int ch,c,k,i,pos;
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
c=1;
temp=start;
while(temp){
	printf("|%d|-->",temp->data);
	c++;
	temp=temp->link;}
printf("\nenter kth node");
scanf("%d",&k);
i=c-k;
pos=1;
temp=start;
while(temp){
	if(pos==i){
		printf("kth node value=%d",temp->data);
		break;}
pos=pos+1;
temp=temp->link;}
}
	




