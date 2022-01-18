#include <stack>
#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &input, stack<int> &extra) {
	// Write your code here
  if(input.size()==0||input.size()==1)
  {
    return;
  }
  int x=input.top();
  input.pop();
  reverseStack(input,extra);
  while(!input.empty())
  {
    int a=input.top();
    input.pop();
    extra.push(a);
  }
  input.push(x);
  while(!extra.empty())
  {
    int b=extra.top();
    extra.pop();
    input.push(b);
  }
}
int main(){

    stack<int> s,s1;
    s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

    reverseStack(s,s1);
    while(!s.empty()){
        int a = s.top();
        cout<<a<<endl;
        s.pop();
    }
}