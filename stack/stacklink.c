#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;}*start,*temp,*t;
struct node *push();
struct node *pop();
void display();
void main(){
int ch,n,k,p;
while(1){
printf("\t[1]push\n\t[2]pop\n\t[3]display\n");
printf("enter user choice for case:");
scanf("%d",&ch);
switch(ch){
case 1:
	start=push(start);
	display(start);
	break;
case 2: start=pop(start);
	display(start);
	break;
case 3: display(start);
	break;
default:printf("none\n");}}}
struct node *push(struct node*start){
int ch;
printf("enter choice");
scanf("%d",&ch);
while(ch){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter value");scanf("%d",&temp->data);
	temp->link=NULL;
		if(start==NULL){
			start=temp;}
		else{
			temp->link=start;
			start=temp;}
	printf("enter choice");
	scanf("%d",&ch);}
	return start;}
struct node* pop(struct node *start){
			temp=start;
			temp=start->link;
			free(start);
		return(temp);
}
void display(struct node *start){
	temp=start;
	while(temp){
		printf("|%d|--->",temp->data);
			temp=temp->link;}
	printf("\n");
}

