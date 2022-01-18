#include<bits/stdc++.h>
using namespace std;
int missingNo(int arr[],int n){
    int sum = accumulate(arr,arr+n,0);
    int actualsum = (n+1) + (n*(n+1)/2);
    return actualsum - sum;
}
int missno2(int arr[],int n){
    int x = 0;
    for(int i=0;i<n;i++){
        x^=arr[i];
    }
    for(int i=1;i<=n+1;i++){
        x^=i;
    }
    return x;
}
int main(){
    int arr[]={3,2,4,6,1};
    int n = 5;
    cout<<"missing element is "<<missno2(arr,n);
}