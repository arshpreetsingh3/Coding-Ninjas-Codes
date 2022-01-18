#include<bits/stdc++.h>
using namespace std;
int staircase(int n){    
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }if(n==3){
        return 4;
    }
    int *dp = new int[n+1];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=n;i++){
        dp[i]= dp[i-1]+dp[i-2]+dp[i-3];
    }
    return dp[n];
}
int main(){
    int ansn = staircase(10);
    cout<<ansn;
}