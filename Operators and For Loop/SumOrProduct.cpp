#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
    cin>>n;
    int c;
    cin>>c;
    int sum=0;
    int prod = 1;
    if(c==1)
    {
      for(int i=0;i<=n;i++)
      {
        sum+=i;
      }
      cout<<sum;
    }
    else if(c==2)
    {
      for(int j=1;j<=n;j++)
      {
        prod=prod*j;
      }
      cout<<prod;
    }
  else
    {
      cout<<-1;
    }
	
}
