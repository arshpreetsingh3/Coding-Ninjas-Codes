#include<bits/stdc++.h>
using namespace std;
int FindSortedArrayRotation1(int arr[],int n){
    int min  = arr[0], minindex;
    for(int i =1;i <n;i++){
        if(min > arr[i]){
            min = arr[i];
            minindex = i;
        }
    }
    return minindex;
}
int FindSortedArrayRotation(int *arr,int size){
    int left = 0;
    int right = size  -1;
    while(left  < right){
        int mid = left + (right - left) /2;
        if(arr[mid] > arr[right]){
            left = mid+1;
        }else{
            right = mid;
        }
      
    }
      return left;
}
int main(){
    int arr[] = {5,6,1,2,3,4};
    int n  = 6;
   cout <<  FindSortedArrayRotation1(arr,n) << endl;
    cout << FindSortedArrayRotation(arr,n);

}