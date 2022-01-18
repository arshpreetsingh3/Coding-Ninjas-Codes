#include<bits/stdc++.h>
using namespace std;
void reverse(char arr[],int start,int ending){
    int i=start,j = ending;
    while(i<j){
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
        i++;
        j--;
    }
}
void reverseEachWord(char arr[]){
    int start=0,ending=0,i;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i] == ' '){
            ending = i-1;
            reverse(arr,start,ending);
            start = i+1;
        }
    }
    ending = i-1;
    reverse(arr,start,ending);
}
int main(){
  char arr[100];
  cin.getline(arr,100);
  reverseEachWord(arr);
  cout<<arr;
  return 0;
}
