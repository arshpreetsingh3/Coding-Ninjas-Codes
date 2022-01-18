#include<bits/stdc++.h>
using namespace std;
int binaryTreeNo(int h){
    long long int ans[h+1];
    if(h==0 || h==1){
        return 1;
    }
    ans[0]=1;
    ans[1]=1;
    int mod = (int)(pow(10,9)) + 7;
    for(int i=2;i<=h;i++){
        long temp1 = (long)(ans[i-1]) *ans[i-1];
        temp1 = temp1 % mod;
        long temp2 = 2 *(long)(ans[i-1])*ans[i-2];
        temp2 = temp2 % mod;
        ans[i] = (temp1+temp2) % mod;
    }
    int ans1 = ans[h];
    return ans1;

    
}
int main(){
    int ans = binaryTreeNo(4);
    cout<<ans;
}