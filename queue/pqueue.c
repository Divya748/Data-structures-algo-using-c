#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	int priority;
	struct node *link;};
struct node *start,*temp,*t;
struct node* insert(struct node*);
struct node* delete(struct node*);
void display(struct node*);
int main(){
while(1){
int ch;
printf("--------------\n");
printf("MENU\n");
printf("1.insertion\n");
printf("2.deletion\n");
printf("3.display\n");
printf("----------------\n");
printf("enter the case you need to execute");
scanf("%d",&ch);
switch(ch){
	case 1:start=insert(start);
		display(start);
		break;
	case 2:start=delete(start);
		display(start);
		break;
	case 3:display(start);
		break;}
}}

struct node* insert(struct node *start){
int pri,ch;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&temp->data);
printf("enter the priority");
scanf("%d",&pri);
temp->priority=pri;
if(start==NULL||pri<start->priority){
	temp->link=start;
	start=temp;}
else{
	t=start;
	while(t->link!=NULL && t->link->priority<=pri){
		t=t->link;}
	temp->link=t->link;
	t->link=temp;}
return start;}

struct node* delete(struct node *start){
temp=start;
start=temp->link;
free(temp);
return start;}

void display(struct node *start){
temp=start;
printf("priority queue is:");
printf("\n");
while(temp){
	printf("value=%d,priority=%d\n",temp->data,temp->priority);
	temp=temp->link;}}



