
//mean,median of a linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t;
void main(){
int ch,c=0,x,avg;
float sum=0;
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
printf("elements in a linked list\n");
temp=start;
while(temp){
	printf("%d\n",temp->data);
	c++;
	sum=sum+temp->data;
	temp=temp->link;}
printf("length of a linked list=%d\n",c);
printf("mean of a linked list=%.2f",sum/c);
if(c%2==0){
	printf("\ngiven list is even");
	x=c/2;
	c=0;
	temp=start;
	while(temp){
		c=c+1;
		if(c==x){
			avg=(temp->data+temp->link->data)/2;}
		temp=temp->link;}
printf("\n median of a linked list=%d",avg);}
else{
	printf("\ngiven list is odd\n");
	x=(c/2)+1;
	c=0;
	temp=start;
	while(temp){
		c=c+1;
		if(c==x){
			printf("median of a list=%d",temp->data);}
	temp=temp->link;}
}
}


