#include<bits/stdc++.h>
using namespace std;
void sortarray(int input[],int si,int ei){
  int mid = (si+ei)/2;
  int i = si;
  int j = mid+1;
  int temp[10000],k=0;
  while(i<=mid && j<=ei){
    if(input[i]<=input[j]){
      temp[k]=input[i];
      i++;
      k++;
    }
    else{
      temp[k]=input[j];
      j++;
      k++;
    }
  }
  while(i<=mid){
    temp[k]=input[i];
    i++;
    k++;
  }
  while(j<=ei){
    temp[k]=input[j];
    j++;
    k++;
  }
  for(int i=0;i<=ei-si;i++){
    input[i+si]=temp[i];
  }
}
void helper(int input[],int si,int ei){
  if(si>=ei){
    return;
  }
  int mid=(si+ei)/2;
  helper(input,si,mid);
  helper(input,mid+1,ei);
  sortarray(input,si,ei);
}
void mergeSort(int input[], int size){
 	// Write your code here
  int len = size;
  int si=0,ei=size-1;
  helper(input,si,ei);
}
int main(){
    int arr[5]={5,4,3,2,1};
    mergeSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}