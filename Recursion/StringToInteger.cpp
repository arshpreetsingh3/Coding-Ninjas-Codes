#include<bits/stdc++.h>
using namespace std;
int strlen(string s)
{
    int len = 0;
    while (s[len])
        len++;

    return len;
}
int changer(string s){
    int len = strlen(s);
    int ans=0,rest,x;
    if(len == 1){
       x = s[0]-48;
       return x;
    }
    
    rest = changer(s.substr(1));    
    char first = s[0];
    ans = first - '0';
    ans = ans*pow(10,len-1)+rest;
    return ans;
}
int main(){
 string s;
 cin>>s;
 int n = changer(s);
 cout<<n;
}