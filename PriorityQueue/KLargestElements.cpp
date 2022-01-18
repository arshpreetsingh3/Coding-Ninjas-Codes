#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
vector<int> kLargest(int input[], int n, int k){
   
 priority_queue<int ,vector<int>,greater<int> > p;
 //min heap stores the least element at the root
  vector<int> v;

  for(int i=0;i<k;i++)
  {
   p.push(input[i]);    
  }
  
  for(int i=k;i<n;i++){
    int minn = p.top();
    if(minn < input[i]){
      p.pop();
      p.push(input[i]);
    }
   }
  while(!p.empty())
 {
    int ele = p.top();
    p.pop();
    v.push_back(ele);
  }
  return v;

}
int main(){
    int input[]={2 ,12 ,9 ,16 ,10, 5 ,3 ,20 ,25 ,11 ,1 ,8 ,6 };
    vector<int> ans = kLargest(input,13,4);
    for(int i=0;i<4;i++){
        cout<<ans[i]<<endl;
    }
}