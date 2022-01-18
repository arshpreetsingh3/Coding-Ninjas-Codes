#include<bits/stdc++.h>
using namespace std;
void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
  if(input[0] == '\0')
  {return;}
  
  if(input[0]!=c1){
    replaceCharacter(input+1,c1,c2);
  }else{
    if(input[0]==c1)
    {
      input[0]=c2;
    }
    replaceCharacter(input,c1,c2);
  }
    
}
int main(){
    char inp[100];
    cin>>inp;
    char c1,c2;
    cin>>c1>>c2;
    replaceCharacter(inp,c1,c2);
    cout<<inp;
}