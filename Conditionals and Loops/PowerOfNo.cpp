#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,ans=1;
    cin >> x >> n;
    for(int i = 1 ; i <=n ; i++){
        ans *= x;
    }
    cout<<ans<<endl;
}