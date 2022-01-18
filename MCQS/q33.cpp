#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4]={1,3,5,7};
    int *const p = &a;
    *p++;
    //++*p would work as it would pt to the same integer only
    //but *p++ would change the address to next int which is nt possible as it points to const int
    cout<<a[0];
}