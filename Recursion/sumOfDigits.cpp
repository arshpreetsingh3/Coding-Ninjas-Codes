#include<bits/stdc++.h>
#include<string>
using namespace std;
int digit(int n)
{
    if(n==0){
        return 0;
    }
    int ans=0;
    int sum=0;
     if(n>0){
         sum = digit(n/10)+(n%10);
     }
     return sum;
}
int main(){

    int n;
    cin>>n;
    int ans = digit(n);
    cout<<ans;
}