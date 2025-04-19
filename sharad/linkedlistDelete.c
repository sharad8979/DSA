#include<stdio.h>
struct node{
	int data;
	struct node *next;
}*start =NULL;
typedef struct node NODE;
void create(){
	NODE *ptr,*temp;
	int num;
	ptr=(NODE *)malloc(sizeof(NODE));
	if(ptr==NULL){
		printf("Memory is not allocated");
		exit(0);
	}
	printf("\nEnter Element=");
	scanf("%d",&num);
	ptr->data=num;
	ptr->next=NULL;
	if(start==NULL){
		start=ptr;
	}else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=ptr;
	}
}

void display(){
	NODE *temp;
	int c=0;
	temp=start;
	if(temp==NULL){
		printf("\nLinked list is empty...");
	}else{
		printf("\n....List Elements are...\n");
		while(temp!=NULL){
			printf(" %d",temp->data);
			c++;
			temp=temp->next;
		}
		printf("\nNumber of nodes in list=%d",c);
	}
}

void deleteFirst(){
      NODE *ptr;
	  if(start==NULL){
	  	printf("\nLinked List is empty....");
	   }else {
	   	         ptr=start;
	   	     if(ptr->next==NULL){
	   	     	     printf("\nDelete Node = %d",ptr->data);
	   	     	     start=NULL;
	   	     	     free(ptr);
				}else{
					   start=ptr->next;
					   printf("\nDelete Node = %d",ptr->data);
					   free(ptr);
				}
	   }	
}

void deleteLast(){
	NODE *ptr , *temp;
	  if(start==NULL){
	  	printf("\nLinked List is empty....");
	   }else {
	   	         ptr=start;
	   	     if(ptr->next==NULL){
	   	     	     printf("\nDelete Node = %d",ptr->data);
	   	     	     start=NULL;
	   	     	     free(ptr);
				}else{
				     while((ptr->next)->next!=NULL){
				     	 ptr=ptr->next;
					 }
				         temp=ptr->next;
				         ptr->next=NULL;
				         printf("\nDelete Node = %d",temp->data);
				            free(temp);
			
			     }
		}
	
}

void deleteAtPos(){
	NODE *temp,*ptr;
	int pos;
	printf("\nEnter Position which you want to delete=");
	scanf("%d",&pos);
	   temp=start;
	if(temp==NULL){
		printf("\nList is Empty.....");
	}else if(temp->next==NULL){
		printf("\nSorry in list only one element exists that element is deletd.. ");
		start=NULL;
		printf("\nDelete Node=%d",temp->data);
		free(temp);
	}else{
		 int i=0;
		 while(i<pos-1){
		 	 ptr=temp;
		 	 temp=temp->next;
		 	 i++;
		 }
		 ptr->next=temp->next;
		 printf("\nDelete Node = %d",temp->data);
		 free(temp);
	}
}

int main(){
	int ch;
	while(1){
		printf("\n\n======Menu======");
		printf("\n1 : Create");
		printf("\n2 : Display");
		printf("\n3 : Delete At First");
		printf("\n4 : Delete At Last");
		printf("\n5 : Delete At Specified Position");
		printf("\n6 : Exit");
		printf("\nEnter your choice=");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 :
				      create();
				      break;
		    case 2 :  display();
			           break;
			case 3 :  deleteFirst();
			           break;
			case 4 :   deleteLast();
			             break;   
			case 5 :	deleteAtPos();
			             break;		        
			case 6 :
			           exit(0);
			default :
			           printf("\nInvalid Choice");		   		   		      
		}
	}
	
	
	
	return 0;
}
