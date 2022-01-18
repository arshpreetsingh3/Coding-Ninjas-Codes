#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 1;
    int *pointer= &a;
    cout<<pointer<<endl;
    (*pointer)++;
    cout<<a<<endl;
    cout<<(*pointer)<<endl;
}