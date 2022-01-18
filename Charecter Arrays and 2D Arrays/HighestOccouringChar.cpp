#include<bits/stdc++.h>
using namespace std;
/* char highestOccurringChar(char arr[]){
    int count=0,res=0;
    char result;
    for(int i=0;arr[i]!='\0';i++){

    }
}*/
char highestoccurence(char arr[]){
    int count=0,res=0;
    char resc;
    for(int i=0;arr[i]!='\0';i++){
        char check=arr[i];
        count=0;
        int j = i;
        while(arr[j]!='\0'){
          if(arr[j]==check){
              count++;
          }
          j++;
        }
        if(res<count){
            res = count;
            resc = check;
        }
    }
    return resc;
}
char highestOccurringChar(char arr[]){
  int freq[256]={0};
  int indices[256];
  for(int i=0;i<256;i++){
      indices[i] = -1;
  }    
  for(int i=0;arr[i]!='\0';i++){
      int index = arr[i];
      freq[index]++;
      if(indices[index]== -1){
          indices[index] = i;
      }
  }
  int maxIndex = 0;
  for(int i=0;i<256;i++){
      if(freq[i] > freq[maxIndex]){
          maxIndex = i;
      }else if(freq[i] == freq[maxIndex]){
          if(indices[i] < indices[maxIndex]){
              maxIndex = i;
          }
      }
  }
  return (char)maxIndex;
}
int main(){
  char arr[100];
  cin>>arr;
  cout << highestOccurringChar(arr) <<endl;
  cout << highestoccurence(arr) <<endl;
}