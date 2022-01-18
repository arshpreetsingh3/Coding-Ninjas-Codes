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
bool checkPalindrome(char str[]){
    int i=0,j=length(str)-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

}


bool check(char str[]){
  int flag = 0;
  int len = length(str);
  for(int i=0;i<len;i++){
      if(str[i]==str[len-i-1]){
          flag++;
      }
  }
  if(flag == len){
      return true;
  }else{
      return false;
  }
}
int main(){
    char name[100];
	cout << "Enter your name : ";
	cin >> name;
    cout << checkPalindrome(name)<<" "<<check(name)<<endl;
}