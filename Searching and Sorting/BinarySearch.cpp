#include<bits/stdc++.h>
using namespace std;
int binsearch(int *arr,int n,int val){
    int start = 0;
    int end = n-1;
    int mid = start;
    while(start <= end){
        mid = start +  (end-start)/2;
        if(val < arr[mid]){
            end = mid -1;
        }else if(val > arr[mid]){
            start = mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}int binarySearch(int arr[], int n, int x) {
	int start = 0, end = n - 1;
	while(start <= end) {
		int mid = (start + end) / 2;
		if(arr[mid] == x) {
			return mid;
		}
		else if(x < arr[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}

	return -1;
}

int BinarySearch(int *arr,int n,int val){
    int mid,start=0,end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(val == arr[mid]){
            return mid;
        }
        else if(val > arr[mid]){
            start = mid+1;
        }else if(val  < arr[mid]){
            end = mid -1;
        }
    }
    if(start > end){
        return -1;
    }
}
int main(){
    int arr[] = {1,3,7,6,11,12,45};
    cout <<"ans : "<<BinarySearch(arr,7,3)<<endl;
    cout <<"ans1 : "<<binsearch(arr,7,3)<<endl;
    cout << binarySearch(arr,7,3) << endl;
}