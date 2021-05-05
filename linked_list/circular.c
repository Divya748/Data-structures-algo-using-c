#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *nextlink,*prevlink;};
struct node *start,*temp,*head,*t;
void display(struct node*);
struct node* create(struct node*);
struct node* insbeg(struct node*);
struct node* delbeg(struct node*);
void insend(struct node*);
void inspos(struct node*);
void insbfval(struct node*);
void insafval(struct node*);
void insmid(struct node*);
void delend(struct node*);
void delpos(struct node*);
void delbfval(struct node*);
void delafval(struct node*);
void delval(struct node*);
void delmid(struct node*);
void main(){
int ch;
printf("MENU\n");
printf("------------------\n");
printf("1.insertion at begining\n");
printf("2.insertion at ending\n");
printf("3.insertion at position\n");
printf("4.insertion at befare a value\n");
printf("5.insertion at after a value\n");
printf("6.insertion at a middle value\n");
printf("7.deletion at begining\n");
printf("8.deletion at ending\n");
printf("9.deletion at position\n");
printf("10.deletion at before a value\n");
printf("11.deletion at after a value\n");
printf("12.deletion at given value\n");
printf("13.deletion at a middle value\n");
printf("------------------\n");
printf("enter a case you need to executed:");
scanf("%d",&ch);
switch(ch){
case 1: start=create(start);
	display(start);
	start=insbeg(start);
	display(start);
	break;
case 2: start=create(start);
	display(start);
	insend(start);
	display(start);
	break;
case 3: start=create(start);
	display(start);
	inspos(start);
	display(start);
	break;
case 4: start=create(start);
	display(start);
	insbfval(start);
	display(start);
	break;
case 5: start=create(start);
	display(start);
	insafval(start);
	display(start);
	break;
case 6: start=create(start);
	display(start);
	insmid(start);
	display(start);
	break;
case 7: start=create(start);
	display(start);
	start=delbeg(start);
	display(start);
	break;
case 8: start=create(start);
	display(start);
	delend(start);
	display(start);
	break;
case 9: start=create(start);
	display(start);
	delpos(start);
	display(start);
	break;
case 10: start=create(start);
	display(start);
	delbfval(start);
	display(start);
	break;
case 11: start=create(start);
	display(start);
	delafval(start);
	display(start);
	break;
case 12: start=create(start);
	display(start);
	delval(start);
	display(start);
	break;
case 13: start=create(start);
	display(start);
	delmid(start);
	display(start);
	break;
}
}
}

struct node* create(struct node* start){ 
int ch;
printf("Enter ur choice");
scanf("%d",&ch);
while(ch){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter a value to the node");
	scanf("%d",&temp->data);
if(start==NULL){
	start=temp;
	temp->prevlink=start;
	temp->nextlink=start;}
else{
	t=start->prevlink;
	temp->prevlink=t;
	temp->nextlink=start;
	start->prevlink=temp;
	t->nextlink=temp;
}
printf("Enter the user choice:");
scanf("%d",&ch);}
return start;}

void display(struct node* start){
printf("elements ina linked list\n");
temp=start;
if(start!=NULL){
do{
	printf("|%d|=>",temp->data);
	temp=temp->nextlink;}
while(temp!=start);}
}

struct node* insbeg(struct node* start){
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("\nenter a value");
scanf("%d",&new->data);
temp=start;
while(temp->nextlink!=start){
	temp=temp->nextlink;}
temp->nextlink=new;
new->prevlink=temp;
new->nextlink=start;
start->prevlink=new;
start=new;
return start;}

void insend(struct node* start){
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&new->data);
temp=start;
while(temp->nextlink!=start){
	temp=temp->nextlink;}
temp->nextlink=new;
new->prevlink=temp;
new->nextlink=start;
start->prevlink=new;}

void inspos(struct node* start){
struct node *new;
int pos,c;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&new->data);
printf("enter the position to insert");
scanf("%d",&pos);
c=1;
temp=start;
while(temp->nextlink!=start){
	if(c==pos){
		new->nextlink=temp;
		new->prevlink=temp->prevlink;
		temp->prevlink->nextlink=new;
		temp->prevlink=new;}
	c++;
	temp=temp->nextlink;}}

void insbfval(struct node* start){
struct node *new;
int val,c;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&new->data);
printf("enter the value to insert before given value");
scanf("%d",&val);
temp=start;
while(temp->nextlink!=start){
	if(temp->data==val){
		new->nextlink=temp;
		new->prevlink=temp->prevlink;
		temp->prevlink->nextlink=new;
		temp->prevlink=new;}
	c++;
	temp=temp->nextlink;}}

void insafval(struct node* start){
struct node *new;
int val,c;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&new->data);
printf("enter the value to insert after given value");
scanf("%d",&val);
temp=start;
while(temp->nextlink!=start){
	if(temp->data==val){
		new->nextlink=temp;
		new->nextlink=temp->nextlink;
		temp->nextlink->prevlink=new;
		temp->nextlink=new;}
	temp=temp->nextlink;}}

void insmid(struct node* start){
struct node *new;
int c,k,m;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&new->data);
c=1;
while(temp->nextlink!=start){
	c++;
	temp=temp->nextlink;}
if(c%2==0){
	temp=start;
	k=c/2;
	m=0;
	while(temp->nextlink!=start){
		m++;
		if(m==k){
			new->nextlink=temp;
			new->nextlink=temp->nextlink;
			temp->nextlink->prevlink=new;
			temp->nextlink=new;}
	temp=temp->nextlink;}}
else{
	temp=start;
	k=(c/2)+1;
	m=0;
	while(temp->nextlink!=start){
		m++;
		if(m==k){
			new->nextlink=temp;
			new->nextlink=temp->nextlink;
			temp->nextlink->prevlink=new;
			temp->nextlink=new;}}
	temp=temp->nextlink;}}

struct node* delbeg(struct node* start){
temp=start;
temp->nextlink->prevlink=temp->prevlink;
t=temp->nextlink;
temp->prevlink->nextlink=t;
free(temp);
start=t;
return start;}

void delend(struct node* start){
temp=start;
while(temp->nextlink!=start){
	temp=temp->nextlink;}
temp->prevlink->nextlink=temp->nextlink;
temp->nextlink->prevlink=temp->nextlink;
free(temp);}

void delpos(struct node* start){
int c,pos;
printf("enter the position to delete");
scanf("%d",&pos);
c=1;
temp=start;
while(temp->nextlink!=start){
	if(c==pos){
		temp->prevlink->nextlink=temp->nextlink;
		temp->nextlink->prevlink=temp->prevlink;
		free(temp);}
	c++;
	temp=temp->nextlink;}}

void delbfval(struct node* start){
struct node *bf;
int val;
printf("enter the value to delete");
scanf("%d",&val);
temp=start;
while(temp->nextlink!=start){
	if(temp->data==val){
		bf->prevlink->nextlink=temp;
		bf->nextlink->prevlink=temp;
		free(bf);}
	bf=temp;
	temp=temp->nextlink;}}

void delafval(struct node* start){
struct node *t;
int val;
printf("enter the value to delete after given value");
scanf("%d",&val);
temp=start;
	while(temp->nextlink!=start && temp->data!=val){
		temp=temp->nextlink;
		t=temp->nextlink;
		temp->nextlink=t->nextlink;
		t->nextlink->prevlink=temp;}
	free(t);}

void delval(struct node* start){
int val;
printf("enter the value to delete");
scanf("%d",&val);
temp=start;
while(temp->nextlink!=start){
	if(temp->data==val){
		temp->prevlink->nextlink=temp->nextlink;
		temp->nextlink->prevlink=temp->prevlink;
		free(temp);}
	temp=temp->nextlink;}}

void delmid(struct node* start){
int c,m,k;
c=1;
while(temp->nextlink!=start){
	c++;
	temp=temp->nextlink;}
if(c%2==0){
	temp=start;
	k=c/2;
	m=0;
	while(temp->nextlink!=start){
		m++;
		if(m==k){
			temp->prevlink->nextlink=temp->nextlink;
			temp->nextlink->prevlink=temp->prevlink;
			free(temp);}
		c++;
		temp=temp->nextlink;}}
else{
	temp=start;
	k=(c/2)+1;
	m=0;
	while(temp->nextlink!=start){
		m++;
		if(m==k){
			temp->prevlink->nextlink=temp->nextlink;
			temp->nextlink->prevlink=temp->prevlink;
			free(temp);}
		c++;
		temp=temp->nextlink;}}

