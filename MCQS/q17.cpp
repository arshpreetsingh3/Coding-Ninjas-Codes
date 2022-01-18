#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4]={1,2,3,4};
    int *ptr = &a[2];
    ptr = ptr -1;
    cout<<*ptr;
}