#include<bits/stdc++.h>
using namespace std;
int sort(int *arr,int n){
    int zeros = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            zeros++;
        }
    }

    int k=0;
    while(zeros--){
        arr[k++] = 0;
    }
    while(k<n){
        arr[k++]=1;
    }
}
void sort1(int arr[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        //if current element is zero, put 0 at next free position in array
        if(arr[i] == 0 ){
            arr[k++] = 0;
        }
      }
      for(int i=k;i<n;i++){
          arr[k++] = 1;
      }
}
int main(){
    int arr[]={0,0,1,0,1,1,0,1,0,};
    int n = sizeof(arr)/sizeof(arr[0]);
    //sort(arr,n);
    sort1(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}