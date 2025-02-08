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
void swap(struct node *, struct node *);
void bubbleSort(struct node *);
struct node *merge_two_sorted_linked_lists(struct node *,struct node *, struct node *);

int main(){
	start1 =create_linked_list(start1);
	bubbleSort(start1);
	start2 =create_linked_list(start2);
	bubbleSort(start2);
	printf("\nThe first sorted linked list is:\n");
	print(start1);
	printf("\nThe second sorted linked list is:\n");
	print(start2);
	start3=merge_two_sorted_linked_lists(start1,start2,start3);
	printf("\nThe merged sorted linked list is:\n");
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

struct node *merge_two_sorted_linked_lists(struct node *start1, struct node *start2,struct node *sorting){
	struct node *new_head=NULL;
	if(start1==NULL)
		return start2;
	if(start2==NULL)
		return start1;
	if(start1!=NULL && start2!=NULL){
		if(start1->data<=start2->data){
			sorting=start1;
			start1=sorting->next;
		}
		else{
			sorting=start2;
			start2=sorting->next;
		}
	}
	new_head=sorting;
	
	while(start1!=NULL && start2!=NULL){
		if(start1->data<=start2->data){
			sorting->next=start1;
			sorting=start1;
			start1=sorting->next;
		}
		else{
			sorting->next=start2;
			sorting=start2;
			start2=sorting->next;
		}
	}
	if(start1==NULL)
		sorting->next=start2;
	if(start2==NULL)
		sorting->next=start1;
	return new_head;
}

void bubbleSort(struct node *start){
    int swapped, i;
    struct node *ptr1;
    struct node *lptr = NULL;
    if (start == NULL)
        return;
    do{
        swapped = 0;
        ptr1 = start;
  
        while (ptr1->next != lptr){
            if (ptr1->data > ptr1->next->data){ 
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}

void swap(struct node *a, struct node *b){
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void print(struct node *start) {
    struct node *current_node = start;
   	while(current_node!=NULL) {
   		printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}
