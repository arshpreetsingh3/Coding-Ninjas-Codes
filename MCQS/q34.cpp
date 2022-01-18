#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p = NULL;{
        int a= 10;
        p=&a;
    }
    cout<<p;
}
//this is called as a dangling pointer 
//variable out of scope
//   pt pointing to non exisitng mem locn
//hw it occours
//case 1 : dynamic _Allocn
//case 2 : variable out of scope
//case 3 : function call