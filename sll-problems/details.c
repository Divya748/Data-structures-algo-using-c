#include<stdio.h>
#include<stdlib.h>
struct node{
	char name[8];
	char id[7];
	int class;
	int marks;
	struct node *link;};
struct node *start,*temp,*t;
void main(){
int ch,max;
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
scanf("%d",&ch);}
printf("all student details\n");
printf("----------------------\n");
temp=start;
while(temp){
	printf("%s\n",temp->name);
	printf("%s\n",temp->id);
	printf("%d\n",temp->class);
	printf("%d\n",temp->marks);
	printf("--------------------\n");
temp=temp->link;}
temp=start;
while(temp){
	max=temp->marks;
	if(temp->marks>max){
		max=temp->marks;}
	else{
		temp=temp->link;}}
		
temp=start;
while(temp){
	if(temp->marks==max){
	printf("\n****topper details******");
	printf("\nstudent name:%s",temp->name);
	printf("\nstudent id:%s",temp->id);
	printf("\nstudent class:%d",temp->class);
	printf("\nstudent marks:%d",temp->marks);}
	temp=temp->link;}
}






