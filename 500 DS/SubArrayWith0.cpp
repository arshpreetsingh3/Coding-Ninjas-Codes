#include<bits/stdc++.h>
using namespace std;
void printSubArrays(int arr[],int n){
    //consider al subarrays starting from i
    for(int i=0;i<n;i++){
        int sum = 0 ;
        //consider all subarrays ending at j 
        for(int j=i;j<n;j++){
            //sum of all elements so far
            sum +=arr[j];
            if(sum == 0){
                cout << "Subarray [" << i <<" .." << j<<"]\n";
            }
        }
    }
}
int main(){
    int arr[]={3,4,-7,3,1,3,1,-4,-2,-2};
    int n = 10;
    printSubArrays(arr,n);
}