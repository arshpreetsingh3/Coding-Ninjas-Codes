#include<bits/stdc++.h>
using namespace std;
bool isPermutation(char inp1[],char inp2[]){
    int freq[256]={0};
    for(int i=0;inp1[i]!='\0';i++){
        int index = inp1[i];
        freq[index]++;
    }
    for(int i=0;inp2[i]!='\0';i++){
        int index = inp2[i];
        freq[index]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!= 0){
            return false;
        }
    }
    return true;
}
int main(){
    char input1[100],input2[100];
    cin>>input1>>input2;
    int a = 'a';
    cout<<a;
    cout << isPermutation(input1,input2)<<endl;
}