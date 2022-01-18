#include<bits/stdc++.h>
using namespace std;
int main(){
    int y=1;
    if( y & (y=2)){
        cout<<"true";
    }else{
        cout<<"false"    ;
       }

       int x=1;
       cout<<x <<" "<<(x=2)<<endl;
}