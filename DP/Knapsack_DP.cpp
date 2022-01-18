#include<bits/stdc++.h>
using namespace std;
int knapsack1(int* weights, int* values, int n, int maxWeight)
{
  int solution[2][maxWeight+1];
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<maxWeight+1;j++)
    { solution[i][j]=0; }
  }
  
  int x=0;
  int y=1;
  for(int i=1;i<n+1;i++)
  {
    for(int j=1;j<maxWeight+1;j++)
    {
      if(i%2!=0)
      {
        if(j-weights[i-1]>=0)
        { solution[y][j]=max(solution[x][j],solution[x][j-weights[i-1]]+values[i-1]); }
        else
        { solution[y][j]=solution[x][j]; }        
      }
      else
      {
        if(j-weights[i-1]>=0)
        { solution[x][j]=max(solution[y][j],solution[y][j-weights[i-1]]+values[i-1]); }
        else
        { solution[x][j]=solution[y][j]; }
      }
    }
  }
  if(n%2==0)
  { return solution[0][maxWeight]; } 
  return solution[1][maxWeight];
}

int main(){
    int wt[]={1,2,4,5};
    int val[]={5,4,8,6};
   int ans =  knapsack1(wt,val,4,5);
   cout<<ans;
}