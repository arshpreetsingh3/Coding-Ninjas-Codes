#include<bits/stdc++.h>
using namespace std;

int knapsack(int* weights, int* values, int n, int maxWeight){

	/* Don't write main().
	*  Don't read input, it is passed as function argument.
	*  Return output and don't print it.
	*  Taking input and printing output is handled automatically.
	*/

    if(n==0||maxWeight==0)
  {
   return 0;
  }
  if(weights[0] > maxWeight)
  {
   return  knapsack(weights +1,values+1,n-1,maxWeight); 
  }
   int yes = knapsack(weights +1,values +1,n-1,maxWeight-weights[0]) + values[0];
   int no = knapsack(weights +1,values+1,n-1,maxWeight);
  
  return max(yes,no);
	//write your code here

}
int main(){
    int wt[]={1,2,4,5};
    int val[]={5,4,8,6};
   int ans =  knapsack(wt,val,4,5);
   cout<<ans;
}