#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *link;};
struct node *start,*temp,*t;
struct node* reversal(struct node*);
void main(){
int ch,c,k,i,val1,val2;
printf("enter a choice");
scanf("%d",&ch);
while(ch!=0){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter a charecter:");
	scanf("%s",&temp->data);
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
	printf("%c",temp->data);
	temp=temp->link;}
c=1;
temp=start;
while(temp){
	c++;
	temp=temp->link;}
k=c/2;
val1=0;
temp=start;
i=1;
while(temp){
	if(i<=k){
		val1=val1+temp->data;}
i++;
temp=temp->link;}
val2=0;
i=1;
start=reversal(start);
temp=start;
while(temp){
	if(i<=k){
		val2=val2+temp->data;}
i++;
temp=temp->link;}
if(val1==val2){
	printf("given string is palindrome");}
else
	printf("no palindrome");
}

struct node* reversal(struct node *start){
struct node *next,*prev,*temp;
temp=start;
prev=NULL;
while(temp){
	next=temp->link;
	temp->link=prev;
	prev=temp;
	temp=next;}
start=prev;
return start;}

	
