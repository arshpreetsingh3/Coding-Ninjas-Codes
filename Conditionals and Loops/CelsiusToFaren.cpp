#include<iostream>
using namespace std;


int main(){

     int c,s,e,w,i;
  	 cin >> s >>  e >> w ;
  	 while(s<=e)
     {
      c=(5.0/9)*(s-32);
      cout<<s<<" "<<c<<endl;
      s=s+w;
     }

  
}


