#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *start = NULL;

struct node *create_linked_list(struct node *);
void print(struct node *);
void del(int );

int main(){
	int k;
	start=create_linked_list(start);
	printf("\nThe linked list is:\n");
	print(start);
	printf("\nEnter the k-th node you want to delete: ");
	scanf("%d", &k);
	del(k);
	printf("\nThe new linked list is:\n");
	print(start);
	return 0;
}

struct node *create_linked_list(struct node *start){
	struct node *new_node, *ptr;
	int num;  
	printf("\n Enter -1 to end");  
	printf("\n Enter the data : ");
	scanf("%d", &num);
	while(num!=-1)  {
	    new_node = (struct node*)malloc(sizeof(struct node));
	    new_node -> data=num;
	    if(start==NULL)  {
	        new_node -> next =NULL;
	        start =new_node;
	    }
	    else  {
	    	ptr=start;
	        while(ptr->next!=NULL)
	            ptr =ptr->next;
	        ptr->next =new_node;
	        new_node->next=NULL;
	    }
	printf("\n Enter the data : ");
	scanf("%d", &num);
	}
	return start;
}

void del(int k){
    struct node *temp1=start;
    if(k==1){
    	start=temp1->next;
    	free(temp1);
	}
	else{
		int i;
		for(i=1;i<=k-2;i++)
			temp1=temp1->next;
		struct node *temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
	}
}

void print(struct node *start) {
    struct node *current_node = start;
   	while(current_node!=NULL) {
   		printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}
