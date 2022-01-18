#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=20,j;
    int l = 20,p;
    j=sizeof(++i);
    p = sizeof(int [++l]);
    cout <<i<<" "<<j;
    cout<< l <<" "<<p ;
}
//sizeof is compile time unary operator thus takes only 1 operand 
//i wont increment 
//if operand for sizeof is fixed size structure 
//wil not evalueate will just check the data type
