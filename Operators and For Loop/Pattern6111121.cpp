#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    cout<<1<<endl;
    for(int i=1;i<=n-1;i++)
    {
      cout<<1;
      for(int j=1;j<=i-1;j++)
      {
        cout<<2;
      }
      cout<<1<<endl;
    }
}
