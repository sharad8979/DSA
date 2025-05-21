#include<stdio.h>


void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];       
        j = i - 1;
         while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
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
	insertionSort(arr,n);
	printf("\nAfter Sorting=");
     for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
