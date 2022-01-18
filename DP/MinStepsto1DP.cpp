#include<bits/stdc++.h>
using namespace std;
int CountStepsTo1(int n){
    int *dp = new int[n+1];
    dp[0] = 0;
    dp[1] = 0;
    for(int i=2;i<n;i++){
        dp[i] = 1 + dp[i-1];
        if(i%2==0){
              dp[i] = min( dp[i] , 1+ dp[i/2] );
        }
         if(i%3==0){
              dp[i] = min( dp[i] , 1+ dp[i/3] );
        }
    }
    int ans = dp[n];
    delete dp;
    return ans;
}
int countsol(int n){
    int *dp = new  int[n+1];
    for(int i=0;i<n;i++){
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = 1;
        dp[3] = 1;
        int ans1,ans2,ans3;
        for(int i=4;i<=n;i++){
            ans1=ans2=ans3=n;
            ans1=dp[i-1];
            if(i%2==0){
                ans2=dp[i/2];
            }
            if(i%3==0){
                ans3=dp[i/3];
            }
            dp[i]=1+min(ans1,min(ans2,ans3));
        }
        int ans = dp[n];
        delete dp;
        return ans;
    }
}
int main(){
    int ans  = countsol(7);
    int ans1 = CountStepsTo1(7);
    cout<<ans<<ans1<<endl;
}