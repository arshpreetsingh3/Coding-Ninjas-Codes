#include<bits/stdc++.h>
using namespace std;
void trimSpaces(char str[]){
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
}
int main(){
    char input[20]="chal ssaaale";
    trimSpaces(input);
    cout<<input<<endl;
}