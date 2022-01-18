#include<bits/stdc++.h>
using namespace std;
void arrange(int arr[],int n){
    int i=0,j=n-1;
    int num = 1;
    while(i<j){
        arr[i]=num;
        num++;
        i++;
        arr[j]=num;
        num++;
        j--;
    }
    if(i==j){
        arr[i] = num;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin >> n;
    
    int arr[n];
    arrange(arr,n);
}