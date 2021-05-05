#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t,*prev,*next;
void main(){
int ch,m;
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
prev=NULL;
while(temp){
	next=temp->link;
	temp->link=prev;
	prev=temp;
	temp=next;}
start=prev;
temp=start;
printf("list of elements after reversal\n");
while(temp){
	printf("%d\n",temp->data);
	temp=temp->link;}
printf("enter an element to revese the list from that element");
scanf("%d",&m);
temp=start;
do{
	printf("|%d|-->",temp->data);
	temp=temp->link;}while(temp->data!=m);
}











