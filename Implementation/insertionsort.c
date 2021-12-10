#include<stdio.h>


int* insertionsort(int arr[],int n){

	for(int i=1;i<n;i++){
		for(int j=i;j>=0;j--){
			if(arr[i]<arr[j]){
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
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
	p = insertionsort(arr,n);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;

}
