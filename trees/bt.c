#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *leftlink,*rightlink;};
struct node *root,*t1;
struct node* create();
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);
int height(struct node*);
int search(struct node*,int);
struct node* insertion(struct node*,int);
struct node* code(struct node*,int);
struct node* delete(struct node*,int);
void levelorder(struct node*,int);
void printlevel(struct node*);
int deep();
void main(){
while(1){
int ch,h,val,a,n;
printf("\nMENU\n");
printf("1.creation\n");
printf("2.traversal\n");
printf("3.height of a tree\n");
printf("4.deletion of a node\n");
printf("5.search\n");
printf("6.insertion\n");
printf("enter user choice");
scanf("%d",&ch);
switch(ch){
	case 1:  root=create();
		printf("elements in a tree\n");
		inorder(root);
		break;
	case 2:  root=create();
		printf("in-order elemnts are:\n");
		inorder(root);
		printf("\npre-order elemnts are:\n");
		preorder(root);
		printf("\npost-order elemnts are:\n");
		postorder(root);
		printf("\nlevel-order elements are:\n");
		printlevel(root);
		break;
	case 4:  root=create();
		inorder(root);
		printf("enter a value to delete");
		scanf("%d",&val);
		root=delete(root,val);
		inorder(root);
		break;
	case 3:  root=create();
		h=height(root);
		printf("height of the tree:%d",h);
		break;
	case 5:  root=create();
		printf("elements in a tree\n");
		inorder(root);
		printf("\nenter a value to search:");
		scanf("%d",&val);
		a=search(root,val);
		if(a==1) printf("search found");
		else printf("search not found");
		break;
	case 6:  root=create();
		printf("elements in a tree\n");
		inorder(root);
		printf("enter the parent node");
		scanf("%d",&n);
		root=insertion(root,n);
		printf("elements after insertion in a tree\n");
		inorder(root);
		break;
}}}

struct node *create(){
	struct node *p;
	int x;
	printf ("Enter data(-1 for no node):");
	scanf ("%d",&x);
	if(x==-1)
		return NULL;
p=(struct node*)malloc(sizeof(struct node));
p->data=x;
printf ("Enter left child of %d:\n",x);
p->leftlink=create();
printf ("Enter right child of %d:\n",x);
p->rightlink=create();
return p;}


void preorder(struct node *t){
	if(t!=NULL){
		printf ("|%d|->",t->data);
		preorder(t->leftlink);
		preorder(t->rightlink);}}


void postorder(struct node *t){
	if(t!=NULL){
		postorder(t->leftlink);
		postorder(t->rightlink);
		printf ("|%d|->",t->data);}}


void inorder(struct node *t){
	if(t!=NULL){
		inorder(t->leftlink);
		printf ("|%d|->",t->data);
		inorder(t->rightlink);
		}}

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



int search(struct node *root,int val){
int a;
a=0;
if(root!=NULL){
	if(root->data==val){
		a=1;}
	else{
		if(a!=1){
			search(root->leftlink,val);}
		if(a!=1){
			search(root->rightlink,val);}}}
return a;}


int deep(struct node *root){
	if(root!=NULL){
		if(root->rightlink==NULL) return root->data;
		else return deep(root->rightlink);
		}
	}


struct node* delete(struct node *root,int val){
	if(root==NULL);
	else if(root->data==val){
		struct node *tf=root;
		if(root->leftlink && root->rightlink){
			int a=deep(tf);
			tf->data=a;
			tf->leftlink=delete(tf->leftlink,a);
			tf->rightlink=delete(tf->rightlink,a);}
		else if(root->leftlink==NULL && root->rightlink==NULL) root=NULL;
		else if(root->rightlink!=NULL) {root=root->rightlink;}
		else if(root->leftlink!=NULL) {root=root->leftlink;}
		}
	else {root->leftlink=delete(root->leftlink,val);root->rightlink=delete(root->rightlink,val);}
	return root;
	}

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


struct node* insertion(struct node *root,int n){
struct node *p,*p2;
int x,a;
if(root!=NULL){
root->leftlink=insertion(root->leftlink,n);
if(root->data==n){
	printf("enter new data");
	scanf("%d",&a);
	printf("if left-0,right-1");
	scanf("%d",&x);
p=(struct node*)malloc(sizeof(struct node));
p->data=x;
if(x==0){
	if(root->leftlink==NULL){
	root->leftlink=p;}
else{
	p2=root->leftlink;
	root->leftlink=p;
	p->leftlink=p2;}}
else{
 	if(root->rightlink==NULL){
		root->rightlink=p;}
	else{
		p2=root->rightlink;
		root->rightlink=p;
		p->rightlink=p2;}}
return root;}
root->rightlink=insertion(root->rightlink,n);
if(root->data==n){
	printf("enter new data");
	scanf("%d",&a);
	printf("if left-0,right-1");
	scanf("%d",&x);
p=(struct node*)malloc(sizeof(struct node));
p->data=x;
if(x==0){ 
	if(root->leftlink==NULL){
	root->leftlink=p;}
else{
	p2=root->leftlink;
	root->leftlink=p;
	p->leftlink=p2;}}
else{
	if(root->rightlink==NULL){
		root->rightlink=p;}
	else{
		p2=root->rightlink;
		root->rightlink=p;
		p->rightlink=p2;}}
return root;}}
return root;}	


	
