#include<bits/stdc++.h>
using namespace std;
int finallen;
void removeX(char input[]) {

   int len= strlen(input);
   if(len==1)
   {
     if(input[0]=='x')
     {
       input[0]='\0';
     }
     return;
   }
   if(input[0]=='x')
   {
     for(int i=0;input[i]!='\0';i++)
     {
       input[i]=input[i+1];
     }
     removeX(input);
   }
   else
   {
     removeX(input+1);
   }
}
int main(){

 char arr[]={'x','a','x'};
 removeX(arr);
 for(int i=0;i<3;i++){
     cout<<arr[i];
 }
}