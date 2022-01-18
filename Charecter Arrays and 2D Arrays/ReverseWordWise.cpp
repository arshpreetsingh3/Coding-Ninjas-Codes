#include<bits/stdc++.h>
using namespace std;
int len(char str[]){
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    return len;

}
void reverse(char str[],int start,int end){
    int i=start,j=end;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
void reversecompletestring(char str[]){
    int i=0,j=len(str)-1;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
void reverseStringWordWise(char str[]){
    reversecompletestring(str);
    int start = 0,end = 0,i;
    for(i=0;str[i]!='\0';i++){
        if(str[i] == ' '){
            end = i-1;
            reverse(str,start,end);
            start = i+1;
        }
    }
    end = i-1;
    reverse(str,start,end);
}
int main(){
 char str[100];
 cin.getline(str, 100);
 reversecompletestring(str);
 cout<<str;

}