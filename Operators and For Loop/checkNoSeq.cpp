#include<iostream>
using namespace std;

int main() {
	// Write your code here
	
  int n;
  cin>>n;
  int no;
  cin>>no;
   int last=no;
   n--;
   bool result=false;
   bool check_inc=false;
   while(n--)
   {
     cin>>no;
     if(no>last){
       result=true;
       check_inc=true;
     }
     else if(no<last && !check_inc){
       result = true;
     }else if(no<=last && check_inc){
       result = false;
       break;
     }
     else{
       result=false;
     }
     last=no;
   }
  if(result){
    cout<<"true";
  }else
    cout<<"false";
}