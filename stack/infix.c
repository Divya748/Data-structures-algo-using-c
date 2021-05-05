#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 50
char stack[max];
int top=-1;
int priority(char);
void push(char);
int pop();
void main(){
char a[50],t;
int i;
printf("Enter ur Expression:");
scanf("%s",a);
i=0;
while(a[i]!='\0'){
	if(isdigit(a[i]) || isalpha(a[i])){
		printf("%c",a[i]);}
	else if(a[i]=='('){
		push(a[i]);}
	else if(a[i]==')'){	
		while(stack[top]!='('){
		t=pop();
		printf("%c",t);}
		top--;}
	else{
		while(priority(stack[top])>priority(a[i])){
			t=pop();
			printf("%c",t);}
		push(a[i]);}
	i++;}
while(top!=-1){
	t=pop();
	printf("%c",t);}
}
int priority(char y){
	if(y=='(')
		return 0;
	if(y=='+' || y=='-')
		return 1;
	if(y=='*' || y=='/')
		return 2;
}
void push(char s){
	stack[++top]=s;}
int pop(){
	int temp;
	temp=stack[top];
	top--;
	return temp;
}
	

			
				
			
