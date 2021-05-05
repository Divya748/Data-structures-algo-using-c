#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
void sort(struct node*);
struct node *start,*temp,*t;
void main(){
int ch;
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
sort(start);
printf("listed elements after sorting\n");
temp=start;
while(temp){
	printf("%d\n",temp->data);
	temp=temp->link;}
}
void sort(struct node* start){
struct node *i,*j;
int temp;
for(i=start;i!=NULL;i=i->link){
	for(j=i->link;j!=NULL;j=j->link){
		if(i->data>j->data){
			temp=i->data;
			i->data=j->data;
			j->data=temp;}
	}
}
}
