#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;}*start,*temp,*t;
struct node* enque(struct node*);
struct node* deque(struct node*);
void display(struct node*);
void main(){
int ch,n;
while(ch){
printf("\t[1]enque\n\t[2]deque\n\t[3]display\n");
printf("enter user choice:");
scanf("%d",&ch);
switch(ch){
case 1:  start=enque(start);
	display(start);
	break
case 2:  start=deque(start);
	display(start);
	break;
case 3: display(start);
	break;
default:printf("none\n");}}}
struct node* enque(struct node* start){
temp=(struct node*)malloc(sizeof(struct node));
printf("enter value");
scanf("%d",&temp->data);
temp->link=NULL;
	if(start==NULL){
		start=temp;}
	else{
		t=start;
		while(t->link){
			t=t->link;}
		t->link=temp;}
		return start;}
struct node* deque(struct node* start){
	temp=start;
	temp=start->link;
	free(start);
	return temp;}
void display(struct node* start){
	temp=start;
	while(temp){
		printf("|%d|--->",temp->data);
			temp=temp->link;}
	printf("\n");
}

