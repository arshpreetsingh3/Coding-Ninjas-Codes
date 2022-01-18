#include<bits/stdc++.h>
using namespace std;
int length(char str[]){
    int len=0;
    int i=0;
    while(str[i]!= '\0'){
        i++;
    }
    return i;
}
void replaceChar(char str[],char c1,char c2){
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    for(int i=0;i<len;i++){
        if(str[i]==c1){
            str[i] = c2;
        }
    }
}
int main(){
    char str[100];
    char c1,c2;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout <<"now enter the charecter which you want to replace"<<endl;
    cin>>c1;
    cout<<"enter the charecter from which you want to replace"<<endl;
    cin>>c2;
    replaceChar(str,c1,c2);
    cout<<str;
}