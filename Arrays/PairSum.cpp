#include<bits/stdc++.h>
using namespace std;
void PairSum(int arr[],int size,int x){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i] + arr[j]) == x){
                if(arr[i]>arr[j]){
                    cout<<arr[j]<<" "<<arr[i]<<endl;
                }else{
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                }
            }
        }
    }
}
int main(){
    int arr[]={1,3,6,2,5,4,3,2,4};
    PairSum(arr,9,7);
}