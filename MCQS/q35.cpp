#include<bits/stdc++.h>
using namespace std;
int *func(void){
    int a = 10;
    cout<<a<<&a;
    return  &a;
}
int main()
{
    int *p = func();
    cout<<p<<*p<<endl;
    cout<<p<<*p;

}
//this is also a case of dangling pinter to avoid this in func we can use statis int as its lifetime is till the prog ends