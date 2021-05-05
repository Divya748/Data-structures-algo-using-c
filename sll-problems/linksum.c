#include<stdio.h>
#include<stdlib.h>
struct node{
	int  data;
	struct node *link;
};
struct node *start,*temp,*end;
void main(){
int i,n,sum=0,x,flag=1,a,b;
printf("enter no of nodes");
scanf("%d",&n);
start=(struct node*)malloc(sizeof (struct node));
temp=start;
for(i=0;i<n;i++){
printf("enter value");
scanf("%d",&temp->data);
temp->link=(struct node*)malloc(sizeof (struct node));
temp=temp->link;
};
temp->link=NULL;
temp=start;
printf("list items are");
while(temp->link){
	printf("%d",temp->data);
	temp=temp->link;}
temp=start;
printf("\nenter  a sum");
scanf("%d",&x);
while(temp){
	end=temp->link;
	while(end){
		if(temp->data+end->data==x){
		printf("(%d,%d)",temp->data,end->data);
		flag=0;
		break;}
	end=end->link;}
temp=temp->link;
}
if(flag==1)
	printf("no pair exist");
}




