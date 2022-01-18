#include<bits/stdc++.h>
using namespace std;
void sort012(int *arr,int n){
    int k= n-1;
    int i=0;
    for(;i<n;i++){
        if(arr[i]!=0){
            break;
        }
    }
    int j = i;
    for(;i<=k;i++){ 
        if(arr[i] == 0){
            swap(arr[j++],arr[i]);
        }
        else if(arr[i] == 2){
            swap(arr[i--],arr[k--]);
        }
    }
}
int main(){
    int arr[]={0,1,2,0,1,2};
    sort012(arr,6);
    for(int i=0;i<6;i++){
        cout << arr[i] <<" ";
    }
}