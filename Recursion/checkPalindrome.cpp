#include<bits/stdc++.h>
#include<string>
using namespace std;
int strlen(string s)
{
    int len = 0;

    while (s[len])
        len++;

    return len;
}
bool check2(string input,int start,int end){
    if(start>=end){
        return true;
    }
  
  if(input[start]==input[end]){
      return check2(input,start+1,end-1);
  }else{
      return false;
  }
}
bool check1(string input){
    cout << "check1" << endl;
  int len = strlen(input);
  cout << len << endl;
  int start = 0;
  int end = len-1;
  if(len==0||len==1){

      return true;
  }
  return check2(input,start,end);
}
int main(){

    string s = "racecar";
    if(check1(s)){
            cout<<"string is palindrome";
    }else{
        cout<<"not palindrome";
    }

}