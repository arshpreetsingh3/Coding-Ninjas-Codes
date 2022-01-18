#include<bits/stdc++.h>
using namespace std;
int main(){
    register int i=10;
    cout<<i<<" "<<&i<<endl;
}
//local variables are stored in stack
//but here we want i to get stored in register
//register doesnt have maemory address for this 
//thus compiler throws error