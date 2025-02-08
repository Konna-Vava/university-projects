#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
	int data;
	struct node *next;
};

struct node *start = NULL;

struct node *create_linked_list(struct node *);
struct node *dup_delete(struct node *);
void print(struct node *);

int main(){
	start =create_linked_list(start);
	printf("\nThe linked list is:\n");
	print(start);
	start=dup_delete(start);
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

void print(struct node *start) {
    struct node *current_node = start;
   	while(current_node!=NULL) {
   		printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}

struct node *dup_delete(struct node *start){
    struct node *p, *q, *prev, *temp;
    p = q = prev = start;
    q = q->next;
    while (p != NULL){
        while (q != NULL && q->data!= p->data){
            prev = q;
            q = q->next;
        }
        if (q == NULL){
            p = p->next;
            if (p != NULL){
                q = p->next;
            }
        }
        else if (q->data == p->data){
            prev->next = q->next;
            temp = q;
            q = q->next;
            free(temp);
        }
    }
    return start;
}
