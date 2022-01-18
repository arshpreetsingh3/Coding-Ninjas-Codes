#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    int dig=0;
    int charec=0;
    int spaces=0;
    while(c!='$'){
        c = cin.get();
        if(c>='a' &&  c<='z'){
            charec++;
        }
        else if(c>='0' && c<='9'){
            dig++;
        }else if(c == ' ' || c=='\t' || c=='\n'){
            spaces++;
        }
    }
    cout<<charec<<" "<<dig<<" "<<spaces;
}