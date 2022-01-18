#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 1;
    switch(a){
        case 1: cout<<"welcome";
        break;
        case 2: cout<<"world";
        continue;
    }
}
//error cause continue cant be used with switch 
//continue onlycan be used with loops