#include<bits/stdc++.h>
using namespace std;
int strlen(char s[])
{
    int len = 0;

    while (s[len])
        len++;

    return len;
}
void replacePi(char input[]) {
	int len= strlen(input);
   if(len == 0 || len == 1)
   {
     return;
   }
   if(input[0]=='p' && input[1]=='i')
   {

    	 for(int i=len;i>=0;i--)
 	    {
    	   input[i+2]=input[i];
  	    }
            input[0]='3';
   	    	input[1]='.';
    	   	input[2]='1';
       		input[3]='4';
        
           replacePi(input+4);

   }
   else
   {
     replacePi(input+1);
   }
}

int main(){
    char arr[] = {'p','i','p','i'};
    replacePi(arr);
     for (int i=0; arr[i]!='\0'; i++) 
    { 
        cout << arr[i];
    } 
    
  

}