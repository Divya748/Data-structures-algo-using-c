

//merging of two lists
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t,*head,*temp2,*t2;
void main(){
int ch,c;
printf("enter a values for 1st linked list\n");
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
	printf("%d\n",temp->data);
	temp=temp->link;}
printf("enter a values for 2nd linked list\n");
printf("enter choice");
scanf("%d",&c);
while(c!=0){
	temp2=(struct node*)malloc(sizeof(struct node));
	printf("enter a value");
	scanf("%d",&temp2->data);
	temp2->link=NULL;
if(head==NULL){
	head=temp2;}
else{
	t2=head;
	while(t2->link){
		t2=t2->link;}
	t2->link=temp2;}
	printf("enter a choice");
	scanf("%d",&c);}
temp2=head;
while(temp2){
	printf("%d",temp2->data);
	temp2=temp2->link;}
temp=start;
while(temp){
	if(temp->link==NULL){
		temp->link=head;
		break;}
	temp=temp->link;}
printf("\nelements after merging two list\n");
temp=start;
while(temp){
	printf("%d\n",temp->data);
	temp=temp->link;}
}
