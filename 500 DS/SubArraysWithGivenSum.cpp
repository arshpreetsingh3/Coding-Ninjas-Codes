#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int i,int j){
    for(int k=i;k<=j;k++){
        cout<< arr[k] <<" ";
    }
    cout<<endl;
}
void findSubArrays(int arr[],int n,int sumtobefound){
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum +=arr[j];
            if(sum == sumtobefound){
                 cout << "Subarray [" << i <<" .." << j<<"]";
                 print(arr,i,j);
            }
        }
    }
}
int main(){
    int arr[]={3,4,-7,1,3,3,1,-4};
    int sum = 7;
    int n = 8;
    findSubArrays(arr,n,sum);
}