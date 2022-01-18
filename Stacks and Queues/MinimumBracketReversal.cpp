	// Write your code here
 #include<string.h>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int countBracketReversals(char input[]){
	// Write your code here
  stack<char> s;
  int count=0;
  int len = strlen(input);
  if(len%2!=0)
  {
    return -1;
  }
  else
  {
    for(int i=0;i<len;i++)
    {
      if(input[i]=='{')
      {
        s.push(input[i]);
      }
      
      
      else if (input[i]=='}')
      {
        if(s.empty())
        {
          s.push(input[i]);
        }
   
        else{
          
          char top = s.top();

        
          if(top == '{')
             s.pop();
          
          else
              s.push(input[i]);
           }
      }   
      
    }
      
      
        
    for(int i=0;!s.empty();i++)
    {
    char c1= s.top();
    s.pop();
      if(s.empty())
      {
        return -1;
      }
    char c2 = s.top();
    s.pop();
    if(c1==c2)
    {
      //c2='}';
      count++;
    }
     else
      {
        count=count+2;
      }
    }
  }
  return count;
}
int main(){
     char str[100];

    cout<<"Enter a string: ";
    cin>>str;
    cout<<"You entered: " << str << endl;
    int ans  = countBracketReversals(str) ;
    cout<<"answer is : " <<ans <<endl;
}