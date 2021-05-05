#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *leftlink,*rightlink;};
struct node *root,*temp,*t2,*t1;
void inorder(struct node*);
void main(){
int ch;
printf("enter user choice");
scanf("%d",&ch);
while(ch){
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&temp->data);
temp->leftlink=NULL;
temp->rightlink=NULL;
if(root==NULL){
	root=temp;}
else{
	t1=root;
	while(t1!=NULL){
		t2=t1;
		if(temp->data<t1->data){
			t1=t1->leftlink;}
		else if(temp->data>t1->data){
			t1=t1->rightlink;}}
	if(t1==NULL){
		if(temp->data<t2->data){
			t2->leftlink=temp;}
		else{
			t2->rightlink=temp;}}
}
printf("enter user choice");
scanf("%d",&ch);}
printf("in-order elemnts are:\n");
inorder(root);
}
void inorder(struct node *root){
	if(root!=NULL){
		printf("|%d|-->",root->data);
		inorder(root->leftlink);
		inorder(root->rightlink);}
}


