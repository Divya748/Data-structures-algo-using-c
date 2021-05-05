#include<stdio.h>
#include<stdlib.h>
struct node{
	char name[8];
	char id[7];
	int class;
	int marks;
	struct node *link;};
void details(struct node*);
struct node *start,*temp,*t;
void main(){
details(start);
printf("all student details\n");
printf("----------------------\n");
temp=start;
while(temp){
	printf("%s\n",temp->name);
	printf("%s\n",temp->id);
	printf("%d\n",temp->class);
	printf("%d\n",temp->marks);
	printf("--------------------\n");
temp=temp->link;}}
void details(struct node* start){
int ch;
printf("enter a choice");
scanf("%d",&ch);
while(ch!=0){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter name");
	scanf("%s",temp->name);
	printf("enter id");
	scanf("%s",temp->id);
	printf("enter class");
	scanf("%d",&temp->class);
	printf("enter marks");
	scanf("%d",&temp->marks);
	temp->link=NULL;
if(start==NULL){
	start=temp;}
else{
	t=start;
	while(t->link){
		t=t->link;}
	t->link=temp;}
printf("enter a choice");
scanf("%d",&ch);}}






