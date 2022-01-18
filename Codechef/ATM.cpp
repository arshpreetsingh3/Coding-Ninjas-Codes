#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;
    if(x<y){
        if(x%5==0){
            y = y-(float)x-0.50;
        }
    }
    cout<<fixed<<setprecision(2)<<y;
}