#include<stdio.h>
#define MAX 10
int queue[MAX];
int rear=-1,front=-1;
int isFull(){
	return (rear==MAX-1);
}
int isEmpty(){
	return (front==-1);
}
void insert(){
	int num;
	if(isFull()){
		printf("\nQueue overflow");
	}else{
		printf("\nEnter element = ");
		scanf("%d",&num);
		if(front==-1){
			rear=0;
			front=0;
		}else{
		  rear=rear+1;	
		}
		
		queue[rear]=num;
	}
}

void deletee(){
	if(isEmpty()){
		printf("\nQueue underflow");
	}else{
		printf("\nDeleted element = %d",queue[front]);
		front=front+1;
	}
}

void display(){
	int i;
	if(isEmpty()){
		printf("\nQueue underflow");
	}else{
		printf("\nQueue Elements are.....");
       for(i=front;i<=rear;i++){
       	printf("%d ",queue[i]);
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
