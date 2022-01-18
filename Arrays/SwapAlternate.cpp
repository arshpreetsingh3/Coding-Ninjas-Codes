#include<bits/stdc++.h>
using namespace std;
void swapAlterenate(int arr[],int n){
 for(int i=0;i<n-1;i+=2){
     int temp = arr[i];
     arr[i] = arr[i+1];
     arr[i+1] = temp;
 }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    swapAlterenate(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i] <<" ";
    }
    }