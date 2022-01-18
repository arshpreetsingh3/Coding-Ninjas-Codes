#include<bits/stdc++.h>
using namespace std;
void removeAllPcurences(char arr[],char c){
    int nextIndex = 0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]!=c){
            arr[nextIndex]=arr[i];
            nextIndex++;
        }
    }
    arr[nextIndex]='\0';
}
int main(){
    char arr[100];
    cin>>arr;
    char c;
    cin>>c;
    removeAllPcurences(arr,c);
    cout<<arr;
}