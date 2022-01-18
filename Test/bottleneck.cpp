//This is The Coding Area
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long*arr = new long long[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maximum = 1;
  map<long long,int> mymap;
  for(int i=0;i<n;i++){
    mymap[arr[i]]++;
    maximum = max(maximum,mymap[arr[i]]);
  }
  cout<<maximum<<endl;

}