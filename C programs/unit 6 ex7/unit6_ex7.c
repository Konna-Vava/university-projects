#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *start1 = NULL;
struct node *start2 = NULL;
struct node *start3 = NULL;

struct node *create_linked_list(struct node *);
void print(struct node *);
struct node *merge_two_linked_lists(struct node *,struct node *, struct node *);

int main(){
	start1 =create_linked_list(start1);
	start2 =create_linked_list(start2);
	printf("\nThe first linked list is:\n");
	print(start1);
	printf("\nThe second linked list is:\n");
	print(start2);
	start3=merge_two_linked_lists(start3,start1,start2);
	printf("\nThe merged linked list is:\n");
	print(start3);
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

struct node *merge_two_linked_lists(struct node *start,struct node *start1, struct node *start2){
	struct node *new_node, *ptr;
	while(start1!=NULL)  {
	    new_node = (struct node*)malloc(sizeof(struct node));
	    new_node -> data=start1->data;
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
	start1=start1->next;
	}
	while(start2!=NULL)  {
	    new_node = (struct node*)malloc(sizeof(struct node));
	    new_node -> data=start2->data;
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
	start2=start2->next;
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
