#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,ans=0,pv=1;
    cin >> n;
    while(n!=0){
        d = n%10;
        n = n/10;
        ans+=(d*pv);
        pv = pv*2;
    }
    cout<<ans;
    
}