#include<bits/stdc++.h>
using namespace std;
int FindUnique(int *arr,int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(i!=j){
                if(arr[i] == arr[j]){
                    break;
                }
            }
        }
        if(j == n){
            return arr[i];
        }

    }
    return INT_MIN;
}
int singleNumber(int *arr,int n){
 map<int,int> m;
 long sum1=0,sum2=0;
 for(int i=0;i<n;i++){
     if(m[arr[i]] == 0){
         sum1 = sum1 + arr[i];
         m[arr[i]]++;
     }
     sum2 = sum2+ arr[i];
 }
 return 2*(sum1) - sum2;
}
int findUnique(int arr[],int size){
    int res = arr[0];
    for(int i=1;i<size;i++){
        res=res ^ arr[i];
    }
    return res;
}
int main(){
    int arr[]={2,3,1,6,3,6,2};
    cout << findUnique(arr,7) <<endl;
    cout << FindUnique(arr,7) <<endl;
    cout << singleNumber(arr,7) <<endl;
}