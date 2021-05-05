#include<stdio.h>
#define MAX 10
int stack[MAX];
void push(int);
int pop();
int peek();
void display();
int top=-1;
void main(){
int ch,n,k;
while(1){
printf("\n\t[1]push\n\t[2]pop\n\t[3]peek\n\t[4]display\n");
printf("enter user choice for case:");
scanf("%d",&ch);
switch(ch){
case 1: printf("enter item");
	scanf("%d",&n);
	push(n);
	printf("elements in a stack\n");
	display();
	break;
case 2: k=pop();
	if(k!=-1)
		printf("Popped out element is:|%d|",k);
	else{
		printf("stack is underflow");}
	break;
case 3: k=peek();
	printf("%d",k);
	break;
case 4: printf("\ntotal elements in a stack"); 
	display();
	break;
default: printf("invalid choice");}
}
}
void push(int item){
	if(top==MAX-1){
		printf("stack is overflow");}
	else{
		stack[++top]=item;}
}
int pop(){
int temp;
	if(top==-1){
		return -1;}
	else{
		temp=stack[top];
		top--;
		return temp;}
}
void display(){
	int x=top;
	for(x;x!=-1;x--){
		printf("|%d|-",stack[x]);}
}
int peek(){
	return stack[top];}





