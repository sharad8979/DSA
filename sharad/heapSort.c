#include<stdio.h>
void heapify(int arr[] ,int n,int i){
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && arr[l]>arr[largest]){
		largest=l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest=r;
	}
	if(largest!=i){
		int t=arr[i];
		arr[i]=arr[largest];
		arr[largest]=t;
		heapify(arr,n,largest);
	}
}
void heapSort(int arr[] ,int n){
	int i;
   for(i=(n/2)-1;i>=0;i--){
   	heapify(arr,n,i);
   }
   for(i=n-1;i>0;i--){
   	int t=arr[0];
   	arr[0]=arr[i];
   	arr[i]=t;
   	heapify(arr,i,0);
   }
}
int main(){
	int arr[10],n,i;
printf("Enter number=");
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
printf("\nBefore Sorting==");
for(i=0;i<n;i++){
	printf("%d ",arr[i]);
}
heapSort(arr,n);
printf("\nAfter Sorting==");
for(i=0;i<n;i++){
	printf("%d ",arr[i]);
}
	
	
	
	return 0;
}
