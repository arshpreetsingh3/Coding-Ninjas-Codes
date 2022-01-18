#include<stack>
#include<bits/stdc++.h>
using namespace std;
int* stockSpan(int *price, int size) {
	// Write your code here
  stack<int> s;
 int *ansarr = new int[size];
    ansarr[0]=1;
  for(int i =0;i<size;i++)
 {
  while(!s.empty() && price[s.top()]<price[i])
  {
    s.pop();
  }
    if(s.empty())
       {
        ansarr[i]=i+1;
       }
      else
      {
      ansarr[i]=i-s.top();
       }
      s.push(i);
 }
  return ansarr;
}
int main(){
    int n =0;
    cout<<"enter the array size"<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"enter the values of stock for" << n<< "days"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *ans = new int[n];
    ans = stockSpan(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
}