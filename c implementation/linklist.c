#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;

};

void diP(struct Node* head){
	struct Node* temp=head;
	
	while(temp){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	
	printf("\n\n");
}


// Search function 
int search(struct Node* head,int val){
	struct Node* temp=head;
	
	while(temp){
		if(val==temp->data){
			printf("Present \n");
			return 1;
		} 
			
		temp=temp->next;
	}
	
	printf("Not Present \n");
	return 0;

}


// Insert head
int insert_head(struct Node* head){
	struct Node* new=NULL;
	new=(struct Node*)malloc(sizeof(struct Node));
	new->data=5;
	
	if(head==NULL){
		head=new;
		return 0;
	}
	
	new->next=head;
	head=new;
	printf("Insertion %d\n" ,new->data);
	return 0;
} 


// Insert at tail
int insert_tail(struct Node* head){
	struct Node* new=NULL;
	new=(struct Node*)malloc(sizeof(struct Node));
	
	new->data=4;
	
	struct Node* temp=head;
	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->next=new;
}


// Insert at between
void insert_between(struct Node* head){
	struct Node* new=NULL;
	new=(struct Node*)malloc(sizeof(struct Node));
	
	new->data=4;
}

int main(){
	struct Node* head=NULL;
	struct Node* second=NULL;
	struct Node* third=NULL;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data =1;
	head->next= second;
	
	second->data =2;
	second->next= third;
	
	third->data =3;
	third->next= NULL;
	
	diP(head);
	search(head,2);
	
	insert_tail(head);
	printf("New list\n");
	diP(head);
	
	return 0;
	
}
