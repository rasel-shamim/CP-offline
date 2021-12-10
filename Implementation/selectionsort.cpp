#include<stdio.h>


int* selectionsort(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		int index = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				index = j;
			}
		}
		int temp;
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	return arr;
}

int main(){

	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		printf("%d ",arr[i]);
	}
	printf("\n");
	int *p;
	p = selectionsort(arr,n);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;

}
