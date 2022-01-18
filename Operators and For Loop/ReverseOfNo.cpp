#include<bits/stdc++.h>
using namespace std;
int main(){
    int rev=0,digit,n;
    cin >> n;
    while(n!=0){
        digit = n%10;
        n = n/10;
        rev = (rev*10) + digit;
    }
    cout<<rev;
}