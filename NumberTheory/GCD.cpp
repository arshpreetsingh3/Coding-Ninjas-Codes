#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	//Write your code here
     if (b == 0) 
      return a; 
   return gcd(b, a % b);  
}
int gcd1(int a, int b) { 
   if (a == 0 || b == 0) 
      return 0; 
   else if (a == b) 
      return a; 
   else if (a > b) 
      return gcd1(a-b, b); 
   else return gcd1(a, b-a); 
} 

int main(){
    cout<<gcd(20,5)<<" "<<gcd(20,5);
}