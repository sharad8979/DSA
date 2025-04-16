#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL;
typedef struct node NODE;
void create()
{
	NODE *ptr,*temp;
	int num;
	ptr = (NODE *)malloc(sizeof(NODE));
	if(ptr==NULL){
		printf("Memory is not allocated");
		exit(0);
	}
	printf("Enter element =");
	scanf("%d",&num);
	ptr->data=num;
	ptr->next=NULL;
	if(start==NULL)
	{
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
	int c=0;
	NODE *temp;
	temp=start;
	if(temp==NULL){
		printf("\nLinked List is Empty");
	}else{
		printf("\n\n-----List elements are--");
		while(temp!=NULL){
			printf(" %d",temp->data);
			c++;
			temp=temp->next;
		}
		printf("\nTotal number of node=%d",c);
	}
}
void search(){
	NODE *temp;
	int n,f=0;
	printf("\nEnter element which you want to search=");
	scanf("%d",&n);
	temp=start;
	while(temp!=NULL){
		if(temp->data==n){
			printf("Element %d is found",n);
			f++;
			break;
		}else{
			temp=temp->next;
		}
	}
	if(f==0){
		printf("\nElement Not found");
	}
}

void printLast(){
	NODE *temp;
	temp=start;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	printf("\nLast Element=%d",temp->data);
}
void printSecondLast(){
	NODE *temp;
	temp=start;
	if(temp==NULL || temp->next==NULL){
		printf("\nElement not foound");
	}else{
		while((temp->next)->next!=NULL){
			temp=temp->next;
		}
		printf("\nSecond last Element=%d",temp->data);
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n1 : Create");
		printf("\n 2 : Display");
		printf("\n 3 : Search");
		printf("\n 4 : Print last element");
		printf("\n 5 : Print Second last element");
		printf("\n 6 : Exit");
		
		printf("\nEnter your choice=");
		scanf("%d",&ch);
		switch(ch){
			case 1 :
			          create();
			          break;
			
			case 2:   
			           display();
			           break;
    		case 3:
    			       search();
     			       break;
			case 4:
			           printLast();
					   break;
			case 5 :
			            printSecondLast();
						break;
								   	       
			case 6 : 
			             exit(0);
			default :
			           printf("Invalid Choice");			 	       
		}
		
	}
	
	return 0;
}
