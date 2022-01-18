#include<bits/stdc++.h>
using namespace std;
bool checkMaxHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        if((2*i+1) < n && arr[i]<arr[2*i +1]){
            return false;
        }
        if((2*i+2)<n && arr[i]<arr[2*i+2]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = {90, 15, 10, 7, 12, 2};
    bool ans = checkMaxHeap(arr,6); 
    if(ans){
        cout<<"given array is a max heap"<<endl;
    }else{
        cout<<"this is not a max heap"<<endl;
    }
}