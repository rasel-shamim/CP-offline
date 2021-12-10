#include<bits/stdc++.h>
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define endl                "\n"
#define pb                  push_back
#define ll                  long long
long long inf = 1e5;

using namespace std;

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i=low;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[high]);
    return i;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int pos = partition(arr,low,high);
        quicksort(arr,low,pos-1);
        quicksort(arr,pos+1,high);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted Values"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    cout<<"Sorted Values"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
