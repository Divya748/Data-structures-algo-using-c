#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t,*prev,*next;
void main(){
int ch,sum1=0,sum2=0;
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
	sum1=sum1*10+temp->data;
temp=temp->link;}
temp=start;
prev=NULL;
while(temp){
	next=temp->link;
	temp->link=prev;
	prev=temp;
	temp=next;}
start=prev;
temp=start;
while(temp){
	sum2=sum2*10+temp->data;
temp=temp->link;}
if(sum1==sum2){
	printf("given linked list is palindrome");}
else
	printf("given linked list is not palindrome");
}





