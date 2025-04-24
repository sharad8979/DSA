#include<stdio.h>
#define MAX 10
int st[MAX];
int top=-1;
void push(){
	int n;
	if(top==MAX-1){
		printf("\nStack is Full");
	}else{
		printf("\nEnter element=");
		scanf("%d",&n);
		top=top+1;
		st[top]=n;
	}
}

void display(){
	int i;
	 if(top==-1){
	 	printf("\nStack is empty");
	 }else{
	 	printf("\nStack Elements are...");
	 	for( i=top;i>=0;i--){
	 		printf("%d ",st[i]);
		 }
	 }
}

void pop(){
	int n;
	if(top==-1){
		printf("\nStack is empty");
	}else{
		n=st[top];
		top=top-1;
		printf("\nDeleted element=%d",n);
	}
}
int main(){
	int ch;
	while(1){
	     printf("\n=====Menu=====");
		 printf("\n1 : Push");
		 printf("\n2 : Pop");
		 printf("\n3 : Display");
		 printf("\n4 : Exit");
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
			           printf("\nInvalid Choice");		   		   		        
		 }	
	}
	
	
	return 0;
}
