#include<bits/stdc++.h>
using namespace std;
bool present(int a[],int n,int x){
    if(n==0){
        return false;
    }
    if(a[0]==x){
        return true;
    }
    //return
     present(a+1,n-1,x);
}
int main(){
  int a[10000],n,x;
  bool answer;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  cout<<"Enter the value of x"<<endl;
  cin>>x;
  cout<<"enter the value of the array elements"<<endl;
  for(int i=0;i<n;i++){
        cin>>a[i];
  }
  answer = present(a,n,x);
  cout<<answer<<endl;

}
