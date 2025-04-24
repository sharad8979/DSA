#include<stdio.h>
#include<stdlib.h>
struct Stack{
	int data;
	struct stack *next;
}*top=NULL;

typedef struct Stack stack;

void push(){
	int n;
	stack *ptr;
	ptr=(stack *)malloc(sizeof(stack));
	printf("\nEnter element=");
	scanf("%d",&n);
	ptr->data=n;
	if(top==NULL){
		top=ptr;
		ptr->next=NULL;
	}else{
		ptr->next=top;
		top=ptr;
	}
}

void display(){
	stack *temp;
	temp=top;
	if(temp==NULL){
		printf("\nStack is empty..");
	}else{
		printf("\nStack Elements are...");
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
void pop(){
	stack *temp;
	if(top==NULL){
		printf("\nStack is empty..");
	}else{
		temp=top;
		top=top->next;
		printf("\nDeleted item=%d",temp->data);
		free(temp);
	}
}
int main(){
	int ch;
	while(1){
		printf("\n===Menu====");
		printf("\n 1 : Push");
		printf("\n 2 : Pop");
		printf("\n 3 : Display");
		printf("\n 4 : Exit");
		printf("\nEnter your choice=");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 :
				        push();
				        break;
				        
			case 2 :
			           pop();
					   break;
					   
			case 3 :
			           display();
					   break;
			case 4 : 
			          exit(0);
			default :
			           printf("\nInvalid choice ");		  		   		   	        
		}
	}
} 
