#include<bits/stdc++.h>
using namespace std;
int a = 10;
int main(){
 int a = 15;
 extern int a=10;
 cout<<a;
}
//this will lead to error as extern variable cant be assigned any value from 
//inside main it will only use value of global scope
//should be extern int a;