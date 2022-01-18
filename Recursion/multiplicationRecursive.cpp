#include<bits/stdc++.h>
using namespace std;
int func(int m,int n){

    if(n==0  || m==0){
        return 0;
    }
    if(n==1){
        return m;
    }
    int ans = m + func(m,n-1);
    return ans;
}
int main(){

    int m=0,n=0;
    cin>>m>>n;
    int ans = func(m,n);
    cout<<ans;
}