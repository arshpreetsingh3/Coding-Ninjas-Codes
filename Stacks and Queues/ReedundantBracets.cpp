#include<bits/stdc++.h>
using namespace std;
bool checkRedundantBrackets(char *input){

    stack<char> s;
    bool flag = false;
    for(int i=0;i<strlen(input);i++){
        if(input[i]!=')'){
            s.push(input[i]);
        }
        else{
            while(s.top() != '('){
                s.pop();
                flag = true;
                if(s.empty()){
                    break;
                }
            }
            if(s.empty()){
                continue;
            }
            if(flag){
                s.pop();
                flag = false;
            }
            else{
                return true;
            }
        }
    }
    return false;
    //also remember the hint told in the video in which we ccount chareceters between '(' and ')' if there is any no greater than 0 means brackets are valid 
    //then for next set of brackets ( ) reset the count to 0 
    //now if are there any more charecters than between both then it means bracket are not redundant 
    //if c = 0 then it means neext set is redundant 
}
int main(){
 char str[100];

    cout<<"Enter a string: ";
    cin>>str;
    cout<<"You entered: " << str << endl;
    bool ans = checkRedundantBrackets(str);
    cout<<"answer is : " <<ans <<endl;
}