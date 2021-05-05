#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t;
void main(){
int ch,sum1=0,sum2=0;
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
	if(temp->data%2==0){
		sum1=sum1+temp->data;}
	else{
		sum2=sum2+temp->data;}
temp=temp->link;}
printf("\nevensum=%d\n",sum1);
printf("oddsum=%d\n",sum2);}
