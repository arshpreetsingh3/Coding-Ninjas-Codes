#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max = INT_MAX , secondMax = INT_MIN;
    int num;
    int count = 1;
    while(count <= n){
        cin >> num;
        if(num > max){
            secondMax = max;
            max = num;
        }
        else if(num > secondMax && num!= max){
            secondMax = num;
        }
        count++;
    }
    cout<<secondMax;
}