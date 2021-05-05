#include<stdio.h>
#include<stdlib.h>
struct node{
	char name[8];
	char id[7];
	int class;
	int marks;
	int data;
	char c;
	struct node *link;};
struct node *start,*temp,*head,*t,*temp2,*t2,*bf,*prev,*next;
struct node* merge(struct node*);
struct node* display(struct node*);
struct node* create(struct node*);
struct node* reversal(struct node*);
struct node* deletebegin(struct node*);
struct node* deleteend(struct node*);
struct node* inend(struct node*);
struct node* inbfval(struct node*);
struct node* inafter(struct node*);
struct node* inpos(struct node*);
struct node* inbeg(struct node*);
struct node* rreversal(struct node*);
struct node* details(struct node*);
struct node* reverselement(struct node*);
void delmid(struct node*);
void insmid(struct node*);
void swap(struct node*);
int middle(struct node*);
void delbf(struct node*);
void delpos(struct node*);
void delval(struct node*);
void delafval(struct node*);
void sort(struct node*);
int length(struct node*);
int sum(struct node*);
int frequency(struct node*);
int min(struct node*);
int max(struct node*);
int search(struct node*);
int kthnode(struct node*);
int k,i,val,flag,avg,c,m,val1,val2;
void main(){
int ch,sum1=0,sum2=0,maxi;
printf("MENU\n");
printf("------------------\n");
printf("1.traversal of  a list\n");
printf("2.reversal of a list without using recursion\n");
printf("3.deletion at begin\n");
printf("4.deletion at end\n");
printf("5.insertion at end\n");
printf("6.insertion at before value\n");
printf("7.insertion at after value\n");
printf("8.insertion at some position\n");
printf("9.insertion at begin\n");
printf("10.deletion before a value\n");
printf("11.deletion at some position\n");
printf("12.deletion of a node at particular value\n");
printf("13.deletion after a value\n");
printf("14.sorting of elements in the list\n");
printf("15.prime numbers in a given linked list\n");
printf("16.length of a linked list\n");
printf("17.sum and average of a linked list\n");
printf("18.frequency of an element in a linked list\n");
printf("19.reversal of a linked list  using recursion\n");
printf("20.minimum value in a linked list\n");
printf("21.maximum value in a linked list\n");
printf("22.merging of two lists\n");
printf("23.searching element in the list\n");
printf("24.print pair wise sum in the list\n");
printf("25.middle element in the list\n");
printf("26.student details in a linked list\n");
printf("27.alternate nodes in a linked list\n");
printf("28.even-sum and odd-sum of a linked list\n");
printf("29.check whether given linked list is palindrome or not\n");
printf("30.kth node from the end of the linked list\n");
printf("31.topper details\n");
printf("32.swap of adjacent elements\n");
printf("33.string palindrome\n");
printf("34.reverse the list after the given element\n");
printf("35.insertion at middle\n");
printf("36.deletion at middle\n");
printf("------------------\n");
printf("enter a case you need to executed:");
scanf("%d",&ch);
switch(ch){
case 1: start=create(start);
	display(start);
	break;
case 2: start=create(start);
	display(start);
	start=reversal(start);
	display(start);
	break;
case 3: start=create(start);
	display(start);
	start=deletebegin(start);
	display(start);
	break;
case 4: start=create(start);
	display(start);
	start=deleteend(start);
	display(start);
	break;
case 5: start=create(start);
	display(start);
	start=inend(start);
	display(start);
	break;
case 6: start=create(start);
	display(start);
	start=inbfval(start);
	display(start);
	break;
case 7: start=create(start);
	display(start);
	start=inafter(start);
	display(start);
	break;
case 8: start=create(start);
	display(start);
	start=inpos(start);
	display(start);
	break;
case 9: start=create(start);
	display(start);
	start=inbeg(start);
	display(start);
	break;
case 10: start=create(start);
	display(start);
	delbf(start);
	display(start);
	break;
case 11: start=create(start);
	display(start);
	delpos(start);
	display(start);
	break;
case 12: start=create(start);
	display(start);
	delval(start);
	display(start);
	break;
case 13: start=create(start);
	display(start);
	delafval(start);
	display(start);
	break;
case 14: start=create(start);
	display(start);
	sort(start);
	display(start);
	break;
case 15: start=create(start);
	display(start);
	temp=start;
	while(temp){
		k=0;
		for(i=1;i<=temp->data;i++){
			if(temp->data%i==0){
				k++;}}
		if(k==2){
			printf("\nprime number=");
			printf("%d",temp->data);}
		temp=temp->link;}
	if(k>=3){
		printf("There are no primes in a given list");}
	break;
case 16: start=create(start);
	display(start);
	k=length(start);
	printf("length of a linked list=%d\n",k);
	break;
case 17: start=create(start);
	display(start);
	val=sum(start);
	printf("sum of all nodes in a given list=%d\n",val);
	k=length(start);
	printf("average of a linked list=%d\n",val/k); 
	break;
case 18: start=create(start);
	display(start);
	k=frequency(start);
	printf("the frequency of a given value in the list is%d",k);
	break;
case 19: start=create(start);
	display(start);
	start=rreversal(start);
	display(start);
	break;
case 20: start=create(start);
	display(start);
	k=min(start);
	printf("the minimum element is |%d|",k);
	break;
case 21: start=create(start);
	display(start);
	k=max(start);
	printf("the maximum element is |%d|",k);
	break;
case 22: start=create(start);
	display(start);
	start=merge(start);
	display(start);
	break;
case 23: start=create(start);
	display(start);
	flag=search(start);
	if(flag==1){
		printf("search found");}
	else{
		printf("search not found");}
	break;
case 24: start=create(start);
	display(start);
	temp=start;
	printf("\nenter  a sum");
	scanf("%d",&k);
	while(temp){
		head=temp->link;
		while(head){
			if(temp->data+head->data==k){
			printf("(%d,%d)",temp->data,head->data);
			flag=0;
			break;}
		head=head->link;}
	temp=temp->link;}
	if(flag==1)
		printf("no pair exist");
	break;
case 25: start=create(start);
	display(start);
	m=middle(start);
	printf("middle element in the list%d",m);
	break;

case 26: start=details(start);
	printf("all student details\n");
	printf("----------------------\n");
	temp=start;
	while(temp){
		printf("%s\n",temp->name);
		printf("%s\n",temp->id);
		printf("%d\n",temp->class);
		printf("%d\n",temp->marks);
		printf("--------------------\n");
	temp=temp->link;}
	break;
case 27: start=create(start);
	display(start);
	printf("\nalternate nodes in linked list without printing first node\n");
	temp=start;
	k=0;
	while(temp){
		k++;
		if(k%2==0)
		printf("|%d|--->",temp->data);
	temp=temp->link;}
	printf("\nalternate nodes in linked list by printing first node\n");
	temp=start;
	k=0;
	while(temp){
		k++;
		if(k%2!=0)
		printf("|%d|--->",temp->data);
	temp=temp->link;}
case 28: start=create(start);
	display(start);
	temp=start;
	k=0;i=0;
	while(temp){
		if(temp->data%2==0){
			k=k+temp->data;}
		else{
			i=i+temp->data;}
	temp=temp->link;}
	printf("evensum=%d\n",k);
	printf("oddsum=%d\n",i);
	break;
case 29: start=create(start);
	display(start);
	temp=start;
	while(temp){
		sum1=sum1*10+temp->data;
	temp=temp->link;}
	temp=start;
	prev=NULL;
	while(temp){
		next=temp->link;
		temp->link=prev;
		prev=temp;
		temp=next;}
	start=prev;
	temp=start;
	while(temp){
		sum2=sum2*10+temp->data;
	temp=temp->link;}
	if(sum1==sum2){
		printf("given linked list is palindrome");}
	else
		printf("given linked list is not palindrome");
	break;
case 30: start=create(start);
	k=kthnode(start);
	printf("kth node from the end of the linked list=%d",k);
	break;
case 31: start=details(start);
	temp=start;
	while(temp){
		maxi=temp->marks;
		if(temp->marks>maxi){
			maxi=temp->marks;
			temp=temp->link;}
		else{
			temp=temp->link;}}
	temp=start;
	while(temp){
		if(temp->marks==maxi){
			printf("\n****topper details******");
			printf("\nstudent name:%s",temp->name);
			printf("\nstudent id:%s",temp->id);
			printf("\nstudent class:%d",temp->class);
			printf("\nstudent marks:%d",temp->marks);}
		temp=temp->link;}
	break;
case 32: start=create(start);
	display(start);
	swap(start);
	display(start);
	break;
case 33:printf("enter a choice");
	scanf("%d",&ch);
	while(ch!=0){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a charecter:");
		scanf("%s",&temp->c);
		temp->link=NULL;
	if(start==NULL){
		start=temp;}
	else{
		t=start;
		while(t->link){
			t=t->link;}
		t->link=temp;}
	printf("enter a choice");
	scanf("%d",&ch);}
	c=1;
	temp=start;
	while(temp){
		c++;
		temp=temp->link;}
	k=c/2;
	val1=0;
	temp=start;
	i=1;
	while(temp){
		if(i<=k){
			val1=val1+temp->c;}
	i++;
	temp=temp->link;}
	val2=0;
	i=1;
	start=reversal(start);
	temp=start;
	while(temp){
		if(i<=k){
			val2=val2+temp->c;}
	i++;
	temp=temp->link;}
	if(val1==val2){
		printf("given string is palindrome");}
	else
		printf("no palindrome");
	break;
case 34: start=create(start);
	display(start);
	start=reverselement(start);
	display(start);
	break;
case 35: start=create(start);
	display(start);
	insmid(start);
	display(start);
	break; 
case 36: start=create(start);
	display(start);
	delmid(start);
	display(start);
	break;
}
}
struct node* create(struct node* start){
struct node *t,*temp; int n;
	printf("enter user choice1/0");
	scanf("%d",&n);
	while(n!=0){
	t= (struct node*)malloc(sizeof(struct node));
	printf("enter new node value:");
	scanf("%d",&t->data);t->link=NULL;
	if (start==NULL)
		start=t;
	else	
		{ temp=start;
		  while(temp->link)
			{
				temp=temp->link;
			}
		 temp->link=t;
		}
	printf("enter user choice1/0");
	scanf("%d",&n);
	}
return start;
}


struct node* display(struct node* start){
	printf("List elements are:\n");
	struct node* temp;
		temp=start;
		while(temp){
			printf("|%d|-->",temp->data);
			temp=temp->link;}
		printf("\n");}


struct node* reversal(struct node *start){
struct node *next,*prev,*temp;
temp=start;
prev=NULL;
while(temp){
	next=temp->link;
	temp->link=prev;
	prev=temp;
	temp=next;}
start=prev;
return start;}


struct node* deletebegin(struct node* start){
	temp=start;
	start=temp->link;
	free(temp);
	temp=start;
return start;}


struct node* deleteend(struct node* start){
	struct node *bf,*temp;
	temp=start;
	while(temp->link){
		bf=temp;
	temp=temp->link;}
	bf->link=NULL;
	free(temp);
return start;}


struct node* inend(struct node* start){
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&new->data);
new->link=NULL;
temp=start;
while(temp->link){
	temp=temp->link;}
temp->link=new;
return start;}


struct node* inbfval(struct node* start){
struct node *new,*temp,*bf;
int val;
printf("enter a value to insert a new node before that value");
scanf("%d",&val);
printf("create a new node\n");
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&new->data);
temp=start;
while(temp->data!=val){
	bf=temp;
	temp=temp->link;}
bf->link=new;
new->link=temp;
return start;}

struct node* inafter(struct node* start){
struct node *new,*temp;
int val;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value for a new node\n");
scanf("%d",&new->data);
printf("enter a value to insert a new node after the value\n");
scanf("%d",&val);
temp=start;
while(temp){
	if(temp->data==val){
		new->link=temp->link;
		temp->link=new;
		break;}
	else{
		temp=temp->link;}
}
return start;}

struct node* inpos(struct node* start){
struct node *bf,*temp,*t;
int pos,c;
t=(struct node *)malloc(sizeof(struct node));
printf("enter a value in a newly created node\n");
scanf("%d",&t->data);
printf("enter a position to insert a new node\n");
scanf("%d",&pos);
temp=start;
c=0;
while(temp){
	if(c==pos){
		t->link=bf->link;
		bf->link=t;}
	bf=temp;
	c++;
	temp=temp->link;}
return start;}

struct node* inbeg(struct node* start){
struct node *new;
printf("create a new node\n");
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value in a new node");
scanf("%d",&new->data);
new->link=start;
start=new;
return start;}

void delbf(struct node* start){
struct node *bf;
int val;
printf("enter a value");
scanf("%d",&val);
temp=start;
while(temp){
	if(temp->link->data==val){
		bf->link=temp->link;
		free(temp);
		break;}
bf=temp;
temp=temp->link;}}

void delpos(struct node* start){
struct node *bf,*temp;
int c=1,pos;
printf("enter a pos to delete");
scanf("%d",&pos);
temp=start;
while(temp){
	if(c==pos){
		bf->link=temp->link;
		free(temp);}
bf=temp;
c++;
temp=temp->link;}}

void delval(struct node* start){
struct node *bf;
int val;
printf("enter a value");
scanf("%d",&val);
temp=start;
while(temp){
	if(temp->data==val){
		bf->link=temp->link;
		free(temp);
		break;}
bf=temp;
temp=temp->link;}}

void delafval(struct node *start){
struct node *next,*ptr=NULL;
int s;
printf("enter the node value");
scanf("%d",&s);
ptr=start;
while(ptr->data!=s){
	ptr=ptr->link;
	next=ptr->link;}
ptr->link=next->link;
free(next);}

void sort(struct node* start){
struct node *i,*j;
int temp;
for(i=start;i!=NULL;i=i->link){
	for(j=i->link;j!=NULL;j=j->link){
		if(i->data>j->data){
			temp=i->data;
			i->data=j->data;
			j->data=temp;}}}
}

struct node* rreversal(struct node* temp){
struct node *start;
if(temp==NULL||temp->link==NULL){
	start=temp;
	return start;}
start=rreversal(temp->link);
temp->link->link=temp;
temp->link=NULL;
return start;}

int length(struct node* start){
int k=0;
temp=start;
while(temp){
	k++;
	temp=temp->link;}
return k;}
	
int sum(struct node* start){
int val=0;
int i=0;
temp=start;
while(temp){
	i++;
	val=val+temp->data;
	temp=temp->link;}
return val;
return i;}

int frequency(struct node* start){
printf("enter a value to check the frequency");
scanf("%d",&val);
temp=start;
k=0;
while(temp){
	if(temp->data==val){
		k++;}
temp=temp->link;}
return k;}

int min(struct node* start){
temp=start;
k=temp->data;
while(temp){
	if(temp->data<k){
		k=temp->data;}
	temp=temp->link;}
return k;}


int max(struct node* start){
while(start){
	if(k<start->data){
		k=start->data;
		start=start->link;}
		else{
			start=start->link;}}
return k;}

int search(struct node* start){
temp=start;
printf("searching element=");
scanf("%d",&k);
flag=0;
while(temp){
	if(temp->data==k){
		flag=1;
		break;}
	else{
		temp=temp->link;}}
return flag;}


struct node* merge(struct node* start){
int ch;
printf("enter a values for 2nd linked list\n");
printf("enter choice");
scanf("%d",&ch);
while(ch!=0){
	temp2=(struct node*)malloc(sizeof(struct node));
	printf("enter a value");
	scanf("%d",&temp2->data);
	temp2->link=NULL;
	if(head==NULL){
		head=temp2;}
	else{
		t2=head;
		while(t2->link){
			t2=t2->link;}
		t2->link=temp2;}
	printf("enter a choice");
	scanf("%d",&ch);}
	temp2=head;
	while(temp2){
		printf("|%d|-->",temp2->data);
		temp2=temp2->link;}
	temp=start;
	while(temp){
	if(temp->link==NULL){
		temp->link=head;
		break;}
	temp=temp->link;}
return start;}


int middle(struct node* start){
int m,c,i;
i=0;
temp=start;
while(temp){
	i++;
temp=temp->link;}
if(i%2==0){
	printf("given list is even\n");
	k=i/2;
	c=0;
	temp=start;
	while(temp){
		c=c+1;
		if(c==k){
			m=(temp->data+temp->link->data)/2;}
		temp=temp->link;}
	return m;}
else{
	printf("given list is odd\n");
	k=(i/2)+1;
	c=0;
	temp=start;
	while(temp){
		c=c+1;
		if(c==k){
			m=temp->data;
			break;}
	temp=temp->link;}
return m;}}

int kthnode(struct node* start){
int pos;
c=1;
temp=start;
while(temp){
	printf("|%d|-->",temp->data);
	c++;
	temp=temp->link;}
printf("\nenter kth node");
scanf("%d",&m);
i=c-m;
pos=1;
temp=start;
while(temp){
	if(pos==i){
		k=temp->data;
		break;}
pos=pos+1;
temp=temp->link;}
return k;}

struct node* details(struct node* start){
int ch; 
printf("enter a choice");
scanf("%d",&ch);
while(ch!=0){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter name");
	scanf("%s",temp->name);
	printf("enter id");
	scanf("%s",temp->id);
	printf("enter class");
	scanf("%d",&temp->class);
	printf("enter marks");
	scanf("%d",&temp->marks);
	temp->link=NULL;
	if(start==NULL){
		start=temp;}
	else{
		t=start;
		while(t->link){
			t=t->link;}
		t->link=temp;}
	printf("enter a choice");
	scanf("%d",&ch);}
	return start;}

void swap(struct node* start){
temp=start;
while(temp){
	t=temp->link;
	if(t){
		k=temp->data;
		temp->data=t->data;
		t->data=k;
		temp=temp->link;}
temp=t;}}

struct node* reverselement(struct node* start){
struct node *next,*prev,*temp;
int m;
printf("enter an element to revese the list from that element");
scanf("%d",&m);
temp=start;
while(temp){
	if(temp->data==m){
		break;}
temp=temp->link;}
start=temp;
temp=start;
prev=NULL;
while(temp){
	next=temp->link;
	temp->link=prev;
	prev=temp;
	temp=next;}
start=prev;
return start;
}


void insmid(struct node* start){
struct node *new;
int i,m,k;
new=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&new->data);
temp=start;
i=1;
while(temp){
	i++;
temp=temp->link;}
if(i%2==0){
	printf("\ngiven list is even");
	k=i/2;
	c=0;
	temp=start;
	while(temp){
		c=c+1;
		if(c==k){
			new->link=temp;
			bf->link=new;
			break;}
	bf=temp;
	temp=temp->link;}}
else{
	printf("\ngiven list is odd\n");
	k=(i/2)+1;
	c=0;
	temp=start;
	while(temp){
		c=c+1;
		if(c==k){
			new->link=temp;
			bf->link=new;
			break;}
	bf=temp;
	temp=temp->link;}}
}

void delmid(struct node* start){
int i,m,k;
temp=start;
i=0;
while(temp){
	i++;
temp=temp->link;}
if(i%2==0){
	printf("\ngiven list is even");
	k=i/2;
	c=0;
	temp=start;
	while(temp){
		c=c+1;
		if(c==k){
			bf->link=temp->link;
			free(temp);}
	bf=temp;
	temp=temp->link;}}
else{
	printf("given list is odd\n");
	k=(i/2)+1;
	c=0;
	temp=start;
	while(temp){
		c=c+1;
		if(c==k){
			bf->link=temp->link;
			free(temp);}
		bf=temp;
		temp=temp->link;}}
}



