#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
char st[50];
int top=NULL;
char pop();
void push(char);

struct node{
	int data;
	struct node *next;
};

struct node *start = NULL;

struct node *create_linked_list_oddnum(struct node *);
void print(struct node *);

int main(){
	int i=0;
	char cr, str[50];
	printf("Enter a string : ");
	gets(str);
	while(str[i]!='\0'){
		push(str[i]);
		i++;
	}
	i=0;
	while(str[i]!='\0'){
		cr = pop();
		str[i] = cr;
		i++;
	}
	printf("The reversed string is : ");
	puts(str);
	
	start =create_linked_list_oddnum(start);
	printf("\nThe 2-digit odd numbers are:\n");
	print(start);
	
	return 0;
}

void push(char cr){
	top++;
	st[top] = cr;
}

char pop(){
	char k;
	k=st[top];
	top--;
	return(k);
}

struct node *create_linked_list_oddnum(struct node *start){
	struct node *new_node, *ptr;
	int i, n, count=0, l=0, num[100];   
	for(i=-99;i<-10;i++){
		n=i%2;
		if(n!=0){
			num[l]=i;
			count++;
			l++;
		}
	}
	for(i=10;i<100;i++){
		n=i%2;
		if(n!=0){
			num[l]=i;
			count++;
			l++;
		}
	}
	l=0;	
	while(l<count){
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node -> data=num[l];
		if(start==NULL){
		    new_node -> next = NULL;
		    start =new_node;
		}
		else{
		    ptr=start;
		    while(ptr->next!=NULL)
		        ptr =ptr->next;
		    ptr->next =new_node;
		    new_node->next=NULL;
		}
		l++;
	}
	return start;
}

void print(struct node *start) {
    struct node *current_node = start;
   	while(current_node!=NULL) {
   		printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}
