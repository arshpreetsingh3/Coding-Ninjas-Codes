#include<bits/stdc++.h>
using namespace std;
void swapp(int *input,int i,int j){
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}
void PushZeroesEnd(int *arr,int n){
    int i,k=0;
    for(int i=0;i<n;i++){
        if(arr[i]){
            swapp(arr,k,i);
            k++;
        }
    }
}
int main(){
int arr[] = {0,3,0,2,0};
int n = 5;
PushZeroesEnd(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i] <<endl;
}
}