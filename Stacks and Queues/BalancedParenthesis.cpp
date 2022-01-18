#include<stack>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
bool checkBalanced(char *exp) {
	// Write your code here
  stack<char> s;
  char a,b,c;
 for(int i=0;i<strlen(exp);i++)
 {
   if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
   {
     s.push(exp[i]);
   }
  else
        {
            switch (exp[i])
            {
            case ')':
             
                if(s.empty()) 
                    return false;
                // Store the top element in a
                a = s.top();
                if (a=='(')
                   s.pop();
                else 
                  return false;
                break;
            case '}':
                 
                if(s.empty()) 
                    return false;
                // Store the top element in b
                b = s.top();
                if (b=='{')
                  s.pop();
                else 
                  return false;
                break;
            case ']':
 
                if(s.empty()) 
                    return false;
                 
                // Store the top element in c
                c=s.top();
                if (c=='[')
                         s.pop();
                else
                  return false;
                
                break;
            }
        }
 }
  if(s.empty()){
    return true;
  }else
  {
    return false;
  }
}
int main(){
    char str[100];

    cout<<"Enter a string: ";
    cin>>str;
    cout<<"You entered: " << str << endl;
    bool ans = checkBalanced(str);
    cout<<"answer is : " <<ans <<endl;
  
}