#include<bits/stdc++.h>
using namespace std;
int allWays(int n,int x,int start){
    if(n==0){
        return 1;
    }
    if(pow(start,x)>n){
        return 0;
    }
    if(pow(start,x)==n){
        return 1;
    }
    int res = 0;
    for(int i = start;i<n;i++){
        int temp = pow(i,x);
        if(temp > n){
            break;
        }
        res += allWays(n-temp,x,i+1);
    }
    return res;
}
int allWays(int n,int x){
    return allWays(n,x,1);
}
int main(){
    int n = 100;
    int x = 2;
    cout << allWays(n,x);
}