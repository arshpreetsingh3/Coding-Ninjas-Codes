#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<sizeof((char)97.354);
}
//sizeof(87.34) is double for this it would be 8 
//but here its being typecasted thus double id=s being converted into char
//and sizze of char is 1