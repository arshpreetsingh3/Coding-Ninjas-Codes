#include<bits/stdc++.h>
using namespace std;
int FindSecondLargest(int *arr,int n){
    int i,max1 = INT_MIN,max2 = INT_MIN;
    if(n < 2){
        return INT_MIN;
    }
    for(i=0;i<n;i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i] > max2 && arr[i]<max1){
            max2 = arr[i];
        }
    }
    return max2;
}
int main(){
    int arr[]= {1,2,3,4,5};
    cout << FindSecondLargest(arr,5)<<endl;

}