#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if(n<10){
        return 1;
    }
    int ans = func(n/10) +1;
    return ans; 
}
int main(){ 
     int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
     cout<<"The no of digits in this number are: " <<func(n);

}