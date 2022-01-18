#include<bits/stdc++.h>
using namespace std;
int getMaxMoney(int arr[],int n){
    int *dp = new int[n];
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[1];
    }
    if(n==2){
        return max(arr[0],arr[1]);
    }
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        dp[i] = max(dp[i-2] + arr[i],dp[i-1]);
    }
    return dp[n-1];
}
int main(){
    int arr[]={5,5,10,100,10,5};
    int n=6;
    int ans = getMaxMoney(arr,n);
    cout<<ans;
}