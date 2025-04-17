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
void insertFirst(){
	NODE *ptr;
	ptr=(NODE *)malloc(sizeof(NODE));
	int num;
	printf("\nEnter Element=");
	scanf("%d",&num);
	ptr->data=num;
	if(start==NULL){
		start=ptr;
		ptr->next=NULL;
	}else{
		ptr->next=start;
		start=ptr;
	}
	
}
void insertLast(){
	NODE *ptr , *temp;
	ptr=(NODE *)malloc(sizeof(NODE));
	int num;
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
void insertAtPos(){
	int pos;
	NODE *ptr , *temp;
	ptr=(NODE *)malloc(sizeof(NODE));
	int num;
	printf("\nEnter Element=");
	scanf("%d",&num);
	printf("\nEnter the postion where you want to insert element=");
	scanf("%d",&pos);
	ptr->data=num;
	if(start==NULL){
		printf("\nList is empty..");
		start=ptr;
		ptr->next=NULL;
	}else{
	 if(pos<1){
		printf("\nInvalid Position..");
	}else if(pos==1){
		ptr->next=start;
		start=ptr;
	}else{
		int c=0;
		temp=start;
		while(temp!=NULL){
			temp=temp->next;
			c++;
		}
		if(pos>c){
			printf("\nInvalid position..");
		}else{
			temp=start;
			int i=0;
			while(i<pos-2){
				temp=temp->next;
				i++;
			}
			ptr->next=temp->next;
			temp->next=ptr;
		}
	}
  }
}
int main(){
	int ch;
	while(1){
		printf("\n======Menu======");
		printf("\n1 : Create");
		printf("\n2 : Display");
		printf("\n3 : Insert At First");
		printf("\n4 : Insert At Last");
		printf("\n5 : Insert At Specified Position");
		printf("\n6 : Exit");
		printf("\nEnter your choice=");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 :
				      create();
				      break;
		    case 2 :  display();
			           break;
			case 3 :  insertFirst();
			           break;
			case 4 :   insertLast();
			             break;   
			case 5 :	insertAtPos();
			             break;		        
			case 6 :
			           exit(0);
			default :
			           printf("\nInvalid Choice");		   		   		      
		}
	}
	
	
	
	return 0;
}
