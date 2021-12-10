#include<stdio.h>


void merge(int arr[],int l,int m,int r){
   int n1 = (m-l)+1;
   int n2 = (r-m);
   int L[n1],M[n2];
   for(int i=0;i<n1;i++){
      L[i] = arr[l+i];
   }
   for(int i=0;i<n2;i++){
      M[i] = arr[m+1+i];
   }
   int i=0,j=0,k=l;
   while(i<n1 && j<n2){
      if(L[i]<=M[j]){
         arr[k] = L[i];
         i++;
      }
      else{
         arr[k] = M[j];
         j++;
      }
      k++;
   }
   while(i<n1){
      arr[k] = L[i];
      i++;
      k++;
   }
   while(j<n2){
      arr[k] = M[j];
      j++;
      k++;
   }
}

void mergesort(int arr[],int l,int r){
   if(l<r){
      int m = (l+r)/2;
      mergesort(arr,l,m);
      mergesort(arr,m+1,r);
      merge(arr,l,m,r);
   }
}


int main(){
   int arr[] = {1,6,3,5,4};
   mergesort(arr,0,4);
   for(int i=0;i<5;i++){
      printf("%d ",arr[i]);
   }
   printf("\n");
}
