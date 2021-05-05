#binary search teee
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct node{
	int data;
	struct node *leftlink,*rightlink;};
struct node *root,*temp,*t2,*t1;
struct node* delet(int,struct node*);
struct node* create(struct node*);
struct node* insert(struct node*);
void search(struct node*,int);
int height(struct node*);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
void levelorder(struct node*,int);
void printlevel(struct node*);
void main(){
int ch,val,a,h;
printf("MENU\n");
printf("1.insertion\n");
printf("2.deletion\n");
printf("3.search\n");
printf("4.traversal\n");
printf("5.height\n");
printf("enter user choice");
scanf("%d",&ch);
switch(ch){
	case 1: root=insert(root);
		printf("elements in a tree\n");
		inorder(root);
		break;
	case 2: root=insert(root);
		printf("elements in a tree before deletion\n");
		inorder(root);
		printf("\nenter a value to delete");
		scanf("%d",&val);
		root=delet(val,root);
		printf("elements in a tree after deletion\n");
		inorder(root);
		break;
	case 3: root=insert(root);
		printf("elements in a tree before deletion\n");
		inorder(root);
		printf("\nenter  a value to search");
		scanf("%d",&val);
		search(root,val);
		break;
	case 4:  root=insert(root);
		printf("in-order elemnts are:\n");
		inorder(root);
		printf("\npre-order elemnts are:\n");
		preorder(root);
		printf("\npost-order elemnts are:\n");
		postorder(root);
		printf("\nlevel-order elements are:\n");
		printlevel(root);
		break;
	case 5:  root=insert(root);
		h=height(root);
		printf("height of the tree:%d",h);
		break;
}}

struct node* insert(struct node *root){
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
return root;}

struct node* delet(int val,struct node *root){
struct node *t1,*t2,*d;
t1=root;
while(val!=t1->data){
	t2=t1;
	if(val<t1->data){
		t1=t1->leftlink;}
	else if(val>t1->data){
		t1=t1->rightlink;}}
if(t2==NULL){
	printf("no value in a tree");}
else{
d=t1;
if(d->leftlink==NULL && d->rightlink==NULL){
	if(t1->data==val){
		t2->rightlink=NULL;
		free(d);}
	else if(t1->data==val){
		t2->leftlink=NULL;
		free(d);}}
else
 if(d->leftlink==NULL || d->rightlink==NULL){
	if(d->leftlink!=NULL){
		if(t2==NULL){
			root=d->leftlink;}
		else{
			if(t1->data==val){
				t2->leftlink=d->leftlink;
				free(d);}}}
	if(d->rightlink!=NULL){
		if(t2==NULL){
			root=d->leftlink;}
		else{
			if(t1->data==val){
				t2->rightlink=d->rightlink;
				free(d);}}}}
else if(d->rightlink!=NULL && d->leftlink!=NULL){
	t1=d->rightlink;
	while(t1->leftlink!=NULL){
		t1=t1->leftlink;}
	val=t1->data;
	delet(val,root);
	d->data=val;}
}
return root;}

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->leftlink);
		printf("|%d|-->",root->data);
		inorder(root->rightlink);}
}

void search(struct node *root,int val){
t1=root;
while(t1->data!=val){
	if(val<t1->data){
		t1=t1->leftlink;}
	else{
		t1=t1->rightlink;}
	if(t1==NULL){break;}}
if(t1==NULL) printf("value not found");
else printf("value found");
}

void preorder(struct node *root){
	if(root!=NULL){
		printf("|%d|-->",root->data);
		preorder(root->leftlink);
		preorder(root->rightlink);}
}

void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->leftlink);
		postorder(root->rightlink);
		printf("|%d|-->",root->data);}
}

int height(struct node *root){
struct node *t;
t=root;
if(t==NULL){
	return 0;}
if(t->leftlink==NULL && t->rightlink==NULL){
	return 0;}
int l,r;
l=height(t->leftlink);
r=height(t->rightlink);
return(1+((l>r)?l:r));}


void levelorder(struct node *root, int level){
if(root==NULL){
	return;}
if(level==0){
	printf("|%d|-->",root->data);}
else if(level>0){
	levelorder(root->leftlink,level-1);
	levelorder(root->rightlink,level-1);}
}

void printlevel(struct node *root){
int h=height(root);
int i;
for(i=0;i<=h;i++){
	levelorder(root,i);}
}
