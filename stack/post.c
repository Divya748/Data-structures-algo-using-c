#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 50
int stack[MAX];
int top=-1;
void push(int);
int pop(int);
int eval(char exp[]);
void main(){
	int val;
	char exp[50];
	printf("enter any post-fix expression");
	scanf("%s" &exp);
	val=eval(exp);
	printf("value of the expression=%d",val);}
int eval(char exp[]){
int i=0;
int m1,m2,val;
while(exp[i]!='\0'){
	if(isdigit(exp[i])){
		push(stack,(int)exp[i]);}
	else{
		m2=pop(stack);
		m1=pop(stack);
		switch(exp[i]){
			case '+': val=m1+m2;
				 break;
			case '–': val=m1-m2;
				break;
			case '/': val=m1/m2;
				break;
			case '*': val=m1*m2;
				break;
			case '%': val=m1%m2;
				 break;
			}
		push(val);}
	i++;}
return pop(val);}

void push(int stack[],int val){
if(top==MAX-1){
	printf("stack is overflow");}
else{
	stack[++top]=val;}}

int pop(int stack[]){
	int val=-1;
	if(top==-1){
		printf("\nstack is underflow");}
	else{
		val=stack[top];
		top--;}
return val;}
