#include<bits/stdc++.h>
using namespace std;
void pairStar(char input[]) {
  int len(char input[]);
  if(input[0]=='\0')
    return;
  
  if(input[0]==input[1])
  {
    int i;
    for( i=len(input);i>0;i--)
      input[i+1]=input[i];
    input[i+1]= '*';
  }
  pairStar(input+1);
}
int len(char input[])
{
  if(input[0]=='\0')
    return 0;
  int temp = len(input+1);
  if(temp == 0)
    return 1;
  else 
    return temp+1;
}



int main(){
    char arr[] = {'p','p','p','p'};
    pairStar(arr);
     for (int i=0; arr[i]!='\0'; i++) 
    { 
        cout << arr[i];
    } 
    
  

}