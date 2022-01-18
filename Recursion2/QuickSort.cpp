#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivot=arr[si];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex = count + si;
    arr[si]=arr[pivotindex];
    arr[pivotindex]=pivot;
    int i=si;
    int j=ei;
    while(i< pivotindex && j > pivotindex){
        if(arr[i]<=pivot){
            i++;
        }else if(arr[j]>pivot){
            j--;
        }else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return pivotindex;
} 
void quicksort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int p = partition(arr,si,ei);
    quicksort(arr,si,p-1);
    quicksort(arr,p+1,ei);
}
int main(){
    int arr[5]={5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}