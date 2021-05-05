#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *nextlink,*prevlink;};
struct node *start,*temp,*head,*t;
void display(struct node*);
struct node* create(struct node*);
struct node* insbeg(struct node*);
struct node* inspos(struct node*);
struct node* insbfval(struct node*);
struct node* insafval(struct node*);
void insmid(struct node*);
void  insend(struct node*);
struct node* delbeg(struct node*);
void delend(struct node*);
void delval(struct node*);
void delpos(struct node*);
void delbfval(struct node*);
void delafval(struct node*);
void delmid(struct node*);
void main(){
int ch;
printf("MENU\n");
printf("------------------\n");
printf("1.insertion at end\n");
printf("2.insertion at some position\n");
printf("3.insertion at begin\n");
printf("4.insertion at before given value\n");
printf("5.insertion at after given value\n");
printf("6.insertion at middle position\n");
printf("7.deletion at begining\n");
printf("8.deletion at end\n");
printf("9.deletion at a particular value\n");
printf("10.deletion at a particular position\n");
printf("11.deletion at before a given value\n");
printf("12.deletion at after a given value\n");
printf("13.deletion of a middle value in a linked list\n");
printf("------------------\n");
printf("enter a case you need to executed:");
scanf("%d",&ch);
switch(ch){
case 1: start=create(start);
	display(start);
	insend(start);
	display(start);
	break;
case 2: start=create(start);
	display(start);
	start=inspos(start);
	display(start);
	break;
case 3: start=create(start);
	display(start);
	start=insbeg(start);
	display(start);
	break;
case 4: start=create(start);
	display(start);
	start=insbfval(start);
	display(start);
	break;
case 5: start=create(start);
	display(start);
	start=insafval(start);
	display(start);
	break;
case 6: start=create(start);
	display(start);
	insmid(start);
	display(start);
	break;
case 7:  start=create(start);
	display(start);
	start=delbeg(start);
	printf("\nlist of element after deletion\n");
	display(start);
	break;
case 8:  start=create(start);
	display(start);
	delend(start);
	printf("\nlist of element after deletion\n");
	display(start);
	break;
case 9:  start=create(start);
	display(start);
	delval(start);
	printf("\nlist of element after deletion\n");
	display(start);
	break;
case 10:  start=create(start);
	display(start);
	delpos(start);
	printf("\nlist of element after deletion\n");
	display(start);
	break;
case 11:  start=create(start);
	display(start);
	delbfval(start);
	printf("list of element after deletion\n");
	display(start);
	break;
case 12:  start=create(start);
	display(start);
	delafval(start);
	printf("list of element after deletion\n");
	display(start);
	break;
case 13:  start=create(start);
	display(start);
	delmid(start);
	printf("\nlist of element after deletion\n");
	display(start);
	break;
}
}

struct node* create(struct node* start){
int ch;
printf("enter a choice");
scanf("%d",&ch);
while(ch!=0){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter a value");
	scanf("%d",&temp->data);
	temp->prevlink=NULL;
	temp->nextlink=NULL;
if(start==NULL){
	start=temp;}
else{
	t=start;
	while(t->nextlink){
		t=t->nextlink;}
	t->nextlink=temp;
	temp->prevlink=t;}
printf("enter a choice");
scanf("%d",&ch);}
return start;}

void display(struct node* start){
temp=start;
while(temp){
	printf("|%d|<-->",temp->data);
temp=temp->nextlink;}
}

void insend(struct node* start){
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("\nenter a value in a new node");
scanf("%d",&new->data);
new->nextlink=NULL;
temp=start;
while(temp->nextlink){
	temp=temp->nextlink;}
temp->nextlink=new;
new->prevlink=temp;}

struct node* inspos(struct node* start){
struct node *new;
int pos,c;
printf("\nenter the position to insert new node");
scanf("%d",&pos);
new=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&new->data);
c=1;
temp=start;
while(temp){
	if(c==pos){
		new->nextlink=temp;
		temp->prevlink->nextlink=new;
		new->prevlink=temp->prevlink;
		temp->prevlink=new;}
c++;
temp=temp->nextlink;}
return start;}

struct node* insbeg(struct node* start){
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value in new node");
scanf("%d",&new->data);
temp=start;
new->nextlink=temp;
new->prevlink=NULL;
temp->prevlink=new;
start=new;
return start;}

struct node* insbfval(struct node* start){
int val;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter a value in new node");
scanf("%d",&temp->data);
printf("enter value before u need to insert");
scanf("%d",&val);
t=start;
while(t->nextlink!=NULL&&t->data!=val){
	t=t->nextlink;}
temp->prevlink=t->prevlink;
temp->nextlink=t;
t->prevlink->nextlink=temp;
t->prevlink=temp;
return start;}


struct node* insafval(struct node* start){
int val;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter a value in new node");
scanf("%d",&temp->data);
printf("enter value after u need to insert");
scanf("%d",&val);
t=start;
while(t->nextlink!=NULL&&t->data!=val){
	t=t->nextlink;}
temp->nextlink=t->nextlink;
t->nextlink=temp;
temp->prevlink=t;
temp->nextlink->prevlink=temp;
return start;}


void insmid(struct node* start){
struct node *new;
int m,c,k;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value in a node");
scanf("%d",&new->data);
c=1;
temp=start;
while(temp){
	c++;
	temp=temp->nextlink;}
if(c%2==0){
	temp=start;
	k=c/2;
	m=0;
	while(temp){
		m++;
		if(m==k){
			new->nextlink=temp->nextlink;
			new->prevlink=temp;
			temp->nextlink->prevlink=new;
			temp->nextlink=new;}
	temp=temp->nextlink;}}
else{
	temp=start;
	k=(c/2)+1;
	m=0;
	while(temp){
		m++;
		if(m==k){
			new->prevlink=temp->prevlink;
			new->nextlink=temp;
			temp->prevlink->nextlink=new;
			temp->prevlink=new;}
	temp=temp->nextlink;}}
}

struct node* delbeg(struct node* start){
struct node *bf;
temp=start;
bf=start;
temp=bf->nextlink;
free(bf);
temp->prevlink=NULL;
start=temp;
return start;}

void delend(struct node* start){
struct node *bf;
temp=start;
while(temp->nextlink){
	bf=temp;
temp=temp->nextlink;}
bf->nextlink=NULL;
free(temp);}

void delval(struct node* start){
int val;
printf("\nenter the value to delete node which is equal to that value");
scanf("%d",&val); 
temp=start;
while(temp->data!=val){
	temp=temp->nextlink;}
temp->prevlink->nextlink=temp->nextlink;
temp->nextlink->prevlink=temp->prevlink;
free(temp);}

void delpos(struct node* start){
struct node *bf;
int c,pos;
printf("\nenter the position to delete node");
scanf("%d",&pos); 
c=1;
temp=start;
while(temp){
	if(c==pos){
	bf->nextlink=temp->nextlink;
	temp->nextlink->prevlink=bf;
	free(temp);
	break;}
c++;
bf=temp;
temp=temp->nextlink;}}

void delbfval(struct node* start){
struct node *bf;
int val;
printf("\nenter the value to delete node before to that value");
scanf("%d",&val); 
temp=start;
while(temp->data!=val){
	bf=temp;
	temp=temp->nextlink;}
bf->prevlink->nextlink=temp;
temp->prevlink=bf->prevlink;
free(bf);}

void delafval(struct node* start){
struct node *af;
int val;
printf("\nenter the value to delete node after to that value");
scanf("%d",&val); 
temp=start;
while(temp->data!=val){
	temp=temp->nextlink;
	af=temp->nextlink;}
temp->nextlink=af->nextlink;
af->nextlink->prevlink=temp;
free(af);}

void delmid(struct node* start){
struct node *bf;
int c,k,m;
temp=start;
c=0;
while(temp){
	c++;
temp=temp->nextlink;}
if(c%2==0){
	k=c/2;
	m=1;
	temp=start;
	while(temp){
		if(m==k){
		bf->nextlink=temp->nextlink;
		temp->nextlink->prevlink=bf;
		free(temp);}
	m++;
	bf=temp;
	temp=temp->nextlink;}}
else{
	k=(c/2)+1;
	m=1;
	temp=start;
	while(temp){
		if(m==k){
		bf->nextlink=temp->nextlink;
		temp->nextlink->prevlink=bf;
		free(temp);}
	m++;
	bf=temp;
	temp=temp->nextlink;}}
}



