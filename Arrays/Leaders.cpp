#include<bits/stdc++.h>
using namespace std;
void Leaders(int *arr,int n){
    int j=0;
    int *res = new int[n];
    int largest = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=largest){
            res[j]= arr[i];
            j++;
            largest = arr[i];
        }
    }
    for(int i=j-1;i>=0;i--){
        cout<<res[i]<<" ";
    }
}
int main(){
  int arr[]={3,12,34,2,0,-1};
  Leaders(arr,6);
}