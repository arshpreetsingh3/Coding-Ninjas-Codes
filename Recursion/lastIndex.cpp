#include<bits/stdc++.h>
using namespace std;
int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
   int temp;
  if (size == 0 ) 
    {
		return -1;
	}
   
    else
    {
	     temp=lastIndex(input+1,size-1,x);
         if(temp==-1)
         { 
            
            if(input[0]==x)
              return 0;
         
           return temp;
         }
         else 
         {
           return temp+1;
         }
    }
}


int main(){
 int n=4,a[4]={9,8,10,8},x=8;
 int answer = lastIndex(a,n,x);
 cout<<"The lst index of the element searched is x"<<answer<<endl;
}