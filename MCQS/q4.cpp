#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=-1,j=10,k=0,l;
    l = ++i && j-- && ++k;
    //in this short ckt cond is there where first cond is true 
    //rest conditions are not exxecuted
    cout<<i<<j<<k<<l;
}