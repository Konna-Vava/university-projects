#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *start = NULL;

struct node *create_linked_list(struct node *);
int IsAscending(struct node *);

int main(){
	int n;
	start =create_linked_list(start);
	n=IsAscending(start);
	if(n==1)
		printf("\nThe list is sorted in ascending order");
	else
		printf("\nThe list is not sorted in ascending order");
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

int IsAscending(struct node *start){
    if (start == NULL)
        return 1;

    while(start->next != NULL)
    {
        if (start->data > start->next->data)
            return 0;
        start = start->next;
    }
    return 1;
}
