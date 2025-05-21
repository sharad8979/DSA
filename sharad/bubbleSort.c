#include<stdio.h>
void bubbleSort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int i,j,n,arr[10];
	printf("Enter number=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before Sorting=");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	bubbleSort(arr,n);
	printf("\nAfter Sorting=");
     for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
