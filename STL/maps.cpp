#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void setdemo(){

   map<int,int> A;
   A[0]=100;
   A[1]=200;
   A[2]=120;
}
void stl(){

    set< pair<int,int> > S;
     set< pair<int,int> >::iterator it;
    S.insert(make_pair(401,450));
    S.insert(make_pair(10,20));
    S.insert(make_pair(2,3));
    S.insert(make_pair(30,400));
    int point = 50;
    it = S.upper_bound(make_pair(point,INT_MAX));
    if(it == S.begin()){
        cout<<"doesnt esist";
        return;
    }
    it--;
    pair<int,int> current = *it;
    if(current.first < point && point<<current.second)
    {
        cout<<"yes its prsent"<< current.first << " " <<current.second ;
    }else{
        cout<<"given point doesnt lie in any interval" <<endl;
    }
}

    int main() 
{ 
  
    stl();
}