#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*bf,*t;
void main(){
int ch,c,m=0;
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
printf("enter an element to search");
scanf("%d",&c);
while(temp){
	if(temp->data==c){
		m=m+1;}
	temp=temp->link;}
if(m>=1){
	printf("search found");}
else{
	printf("search not found");}
}
