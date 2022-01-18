#include<bits/stdc++.h>
using namespace std;
void minLengthWord(char str[],char word[]){
    int minStart = -1;
    int minLength = INT_MAX;
    int currStart = 0;
    int i=0;
    int len= strlen(str);
    for(;i<len;i++){
        if(str[i] == ' '){
            int currWordLength = i - currStart;
            if(currWordLength < minLength){
                minStart = currStart;
                minLength = currWordLength;
            }
            currStart = i+1;
        }
    }
    if(minStart == -1){
        
        for(int i=0;i<=len;i++){
            word[i] = str[i];
        }
    }else{
        int currWordLength = i - currStart;
        if(currWordLength < minLength){
            minStart = currStart;
            minLength = currWordLength;
        }
        int j=0;
        for(int i=minStart;i<minStart + minLength;i++){
            word[j++]= str[i];
        }
        word[j] = '\0';
    }
    cout<<word<<endl;
}
int main(){
    char str[100];
    char output[100];
    cin.getline(str,100);
    minLengthWord(str,output);

}