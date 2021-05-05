#include<stdio.h>
#define MAX 10
int queue[MAX];
int front,rear;
front=-1;
rear=-1;
void enque(int);
void deque();
void display();
void main(){
int ch,n;
while(1){
printf("MENU\n");
printf("1.insertion\n");
printf("2.deletion\n");
printf("3.display\n");
printf("enter ur choice");
scanf("%d",&ch);
switch(ch){
	case 1:  printf("enter an item");scanf("%d",&n);
		enque(n);
		display();
		break;
	case 2:  deque();
		display();
		break;
	case 3:  display();
		 break;}}
}

void enque(int item){
if(front==0&&rear==MAX-1||front==rear+1)
	printf("overflow");
else if(rear==-1 && front==-1){
	front=0;
	rear=0;
	queue[rear]=item;}
else if(rear==MAX-1 && front!=0){
	rear=0;
	queue[rear]=item;}
else{
	queue[++rear]=item;}}

void deque(){
int val;
if(front==-1 && rear==-1){
	printf("underflow");}
else{
	printf("deque element is:%d\n",queue[front]);
	if(front==MAX-1){
		front=0;}
	else{
		if(front==MAX-1)
			front=0;
		else
			front++;}}}


void display(){
	int i;
	printf("------------\n");
	printf("queue is\n");
	for(i=front;i<=rear;i++){
		printf("%d\n",queue[i]);}
printf("------------\n");
}

