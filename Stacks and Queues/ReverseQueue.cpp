#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q) {
	// Write your code here
  if(q.size()==0||q.size()==1)
  {
    return;
  }
  int x=q.front();
  q.pop();
  reverseQueue(q);
  q.push(x);
}

int main(){

     queue<int> q;
     q.push(1);
     q.push(2);
     /*
     q.push(3);
     q.push(4);
     q.push(5); 
     */
     reverseQueue(q);
     while(!q.empty()){

         int a = q.front();
         q.pop();
         cout<<a<<endl;
     }
}