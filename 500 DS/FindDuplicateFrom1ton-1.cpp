#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[],int n){
    bool visited[n];
    fill(visited,visited+n,0);
    for(int i=0;i<n;i++){
        if(visited[arr[i]]){
            return arr[i];
        }
        visited[arr[i]] = true;
    }
    return -1;
}
int dupusingxor(int arr[],int n){
    int x = 0;
    //xor o all elements
    for(int i=0;i<n;i++){
        x^=arr[i];
    }
    //xor from nos 1 to n-1
    for(int i=1;i<=n-1;i++){
        x^=i;
    }
    return x;
}
int dupusingsum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int actualsum = n*(n-1)/2;
    return sum-actualsum;
}
int main(){
    int arr[]={1,2,3,4,4};
    int n = 5;
    cout << findDuplicate(arr,n)<<endl;
    cout <<dupusingxor(arr,n)<<endl;
    cout <<dupusingsum(arr,n)<<endl;
}