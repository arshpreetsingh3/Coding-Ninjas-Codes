#include<bits/stdc++.h>
using namespace std;
int main(){
    static int i=5;
    if(i--){
        cout<<i<<" ";
        main();
    }
}
//static variable is kept until the end of the program //
//lifetime is end of the prog 
//aslo static variables are stored in data segment of memory