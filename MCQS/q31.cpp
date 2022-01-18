#include<bits/stdc++.h>
using namespace std;
int main(){
    int aaa[5]={2,3,4,5,6};
    int *p = &aaa;
    cout<<*p++;
    cout<<*p;
}
//here aaa pts to first ele then *p++ means right to left we go sp p's va;ue is used as it is 
//then first ele is printed in next cout the other ele is printed