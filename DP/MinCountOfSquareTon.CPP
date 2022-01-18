#include<bits/stdc++.h>
using namespace std;
int getMinSquares(int n){
    if(n<=3){
        return n;
    }
    int res = n;
    for(int i=1;i<=n;i++){
        int temp = i*i;
        if(temp >n){
            break;
        }else{
            res = min (res,1+getMinSquares(n-temp));
        }
    }
    return res;
}
int getMinSquaresDP(int n){
    int *dp = new int[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4;i<=n;i++){
        dp[i]=i;
        for(int x=1;x<=i;x++){
            int temp = x*x;
            if(temp >i){
                break;
            }
            else{
                dp[i]=min(dp[i],1+dp[i-temp]);
            }
        }
       
    }
     int res = dp[n];
        delete dp;
        return res;
}
int main(){
    cout << getMinSquares(9)<<endl;
    cout << getMinSquaresDP(9)<<endl;
}