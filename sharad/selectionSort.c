#include<stdio.h>
void selectionSort(int arr[],int n){
	int i,j,temp,min;
	for(i=0;i<n-1;i++){
		  min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		        temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
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
	selectionSort(arr,n);
	printf("\nAfter Sorting=");
     for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
