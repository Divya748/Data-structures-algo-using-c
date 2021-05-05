#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *start,*temp,*t;
void main(){
int i,ch,k=0;
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
printf("list of elements in a linked list\n");
temp=start;
while(temp){
	printf("|%d|--->",temp->data);
	temp=temp->link;}
temp=start;
while(temp){
	k=0;
	for(i=1;i<=temp->data;i++){
		if(temp->data%i==0){
			k++;}}
	if(k==2){
		printf("\nprime number=");
		printf("%d",temp->data);}
	temp=temp->link;}
}





