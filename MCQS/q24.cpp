#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int const *p = &a;
    ++(*p);
    cout<<a;
}
//a const pointer cant be incremented
//compile time error