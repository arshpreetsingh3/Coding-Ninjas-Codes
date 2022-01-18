#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[]="abcde";
   // char *pstr  = "abcde";
    //this above line is very dangerous as we access read only mem which migght work sometime and might wont
    int a[]={1,2,3};
    char b[]="abc";
    cout<<a<<endl;
    cout<<b<<endl;
    char *c = &b[0];
    cout<<c<<endl;
    char c1='a';
    char *pc = &c1;
    cout<<c1<<endl;
    cout<<pc<<endl;
}