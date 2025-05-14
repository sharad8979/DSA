#include<stdio.h>
#include<stdlib.h>
struct NODE{
	int data;
	struct NODE *next;
};
typedef struct NODE node;
node *front=NULL;
node *rear=NULL;
void insert(){
	int num;
	node *ptr;
	ptr=(node *)malloc(sizeof(node));
	printf("\nEnter element=");
	scanf("%d",&num);
	ptr->data=num;
	ptr->next=NULL;
	if(front==NULL){
		front=ptr;
		rear=ptr;
	}else{
		rear->next=ptr;
		rear=ptr;
	}
}

void deletee(){
	node *temp;
	if(front==NULL){
		printf("\nQueue is empty....");
	}else if(front->next==NULL){
		printf("\nDeleted Node= %d",front->data);
		front=NULL;
		rear=NULL;
	}
	else{
		temp=front;
		front=front->next;
		printf("\nDeleted node=%d",temp->data);
		free(temp);
	}
}

void display(){
	node *temp;
	if(front==NULL){
		printf("\nQueue is empty..");
	}else{
		temp=front;
		printf("\nQueue elements are..");
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
int main(){
		int ch;
	while(1){
	   printf("\n====MENU====\n");
	   printf("\n1 : Insertion");
	   printf("\n2 : Deletion");
	   printf("\n3 : Display");
	   printf("\n4 : Exit");
	   printf("\nEnter your choice=");
	   scanf("%d",&ch);	
	   
	   switch(ch){
	   	  case 1 :
	   	  	        insert();
	   	  	        break;
	   	  case 2 :
			         deletee();
					 break;
			case 3 :
			           display();
					   break;
			case 4 :
			             exit(0);
			default :
			           printf("\nInvalid choice");			 		   		 	        
	   	
	   }	
		
	}
	
	
	
	
	return 0;
}

