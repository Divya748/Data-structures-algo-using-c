#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define max 10
int stack[max];
int top=-1;
void push(char);
int pop();
void main(){
int i,a,b,value;
char exp[20];
printf("Enter expression:");
scanf("%s",exp);
printf("Postfix expressin:%s\n",exp);
for(i=0;exp[i]!='\0'; i++){
	if(isalnum(exp[i])){
		printf("%c value:",exp[i]);
		scanf("%d",&value);
		push(value);}
	else {
		b=pop();
		a=pop();
		switch(exp[i]){
			case '+': push(a+b);
				break;
			case '-': push(a-b);
				break;
			case '*':	push(a*b);
				break;			
			case '/':	push(a/b);
				break;
			case '%': push(a%b);
				break;}}}
printf("Result is:%d",stack[top]);}
void push(char item){
	stack[++top]=item;}
int pop(){
	int x;
	x=stack[top];
	top--;
	return x;}



