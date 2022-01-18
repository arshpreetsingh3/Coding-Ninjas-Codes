#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4]={2,44,6,8};
    const int *p = &a;
    cout<<*p;
    ++*p;
    cout<<*p;
}
//const in tthus cant *p cant be changed but p can be changed 
//++p wont have given error