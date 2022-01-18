#include<bits/stdc++.h>

using namespace std;

int main(){
   int t;
   long long i=0,k,n,a,b,fans;
   cin>>t;
   while(t--){
    cin>>n>>a>>b>>k;
    int res = __gcd(a,b);
    int lcm = (a*b)/res;
    fans = n/a + n/b - 2*(n/lcm);
    if(fans>=k){
        cout<<"Win"<<endl;
    }else{
      cout<<"Lose"<<endl;
     }
   }
}
