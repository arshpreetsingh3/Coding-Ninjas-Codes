#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int col=1;
    int value=i;
    while(col<=i)
    {
      cout<<value;
      value++;
      col++;
    }
    cout<<endl;
    i++;
  }
}
