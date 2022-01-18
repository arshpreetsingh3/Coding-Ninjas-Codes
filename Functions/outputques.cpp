#include<bits/stdc++.h>
using namespace std;
void doubleval(int a){
    a = a*2;
}
int func(int b){
    b+=10;
    return b;
}
int square(int c){
    return c*c;
}
int main(){
    int a=8;
    doubleval(a);
    cout<<a;

    int b=5;
    b=func(b);
    cout<<b;

    int c=5;
    c = square(c);
    cout<<c;
}