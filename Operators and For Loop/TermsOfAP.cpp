#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1,current =1;
    while(count<=n){
        int num = 3 * current +2;
        if(num %4 != 0){
            cout << num << " ";
            count++;
        }
        current++;
    }
}