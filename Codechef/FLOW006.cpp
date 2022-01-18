#include<bits/stdc++.h>
using namespace std;
int Sum(int n) {  
    int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }  
    return sum; 
 } 
int main(){
    
    int t=0,ans=0;s
    long int n=0;
    cin >> t;
    while(t--){
        cin>>n;
        ans = Sum(n);
        cout<<ans<<endl;
    }
}