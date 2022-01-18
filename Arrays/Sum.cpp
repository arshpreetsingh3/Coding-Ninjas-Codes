#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
      cin>>input[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+input[i];
    }
    cout<<sum<<endl;
}


