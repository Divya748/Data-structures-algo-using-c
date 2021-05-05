#include<stdio.h>
#define MAX 10
int queue[MAX];
void enque(int);
void deque();
void display();
int front,rear;
front=-1;rear=-1;
void main(){
int ch,n,k;
printf("MENU\n");
printf("1.enque\n");
printf("2.deque\n");
printf("3.display\n");
while(1){
printf("\nswitch choice");
scanf("%d",&ch);
switch(ch){
case 1: printf("enter item");
	scanf("%d",&n);
	enque(n);
	printf("elements in a queue\n");
	display();
	break;
case 2: deque(n);
	printf("elements in a queue\n");
	display();
	break;
case 3: printf("total elements in a queue\n"); 
	display();
	break;
default: printf("invalid choice");
}
}}
void enque(int item){
	if(rear==MAX-1){
		printf("queue is full");}
	else{
		if(front==-1){
			front++;}
		queue[++rear]=item;}
}
void deque(){
	if(rear==-1){
		printf("queue is empty");}
	else{
		printf("deque item is:%d",queue[front]);
		front++;}
	if(front==rear+1){
		front=-1;
		rear=-1;}
}
void display(){
	int k;
	for(k=front;k<=rear;k++){
		printf("|%d|-",queue[k]);}
}



