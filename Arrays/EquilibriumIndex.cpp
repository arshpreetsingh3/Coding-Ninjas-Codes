#include<bits/stdc++.h>
using namespace std;
int equilibrium(int arr[], int n) {
	// Write your code here
  int sum = 0;
   int leftsum = 0;

   for (int i = 0; i < n; i++)
   {
       sum += arr[i];
    }
    //getting the right sum
   for (int i = 0; i < n; i++) 
    {
        sum -= arr[i];
    

    if (leftsum == sum){
        return i;
    }

    leftsum += arr[i];
     }

return -1;
}
int main(){
   // int arr[]={-7,1,5,2,-4,3,0};
    int arr[]={1,2,3,4,1,2,3};
    cout<< equilibrium(arr,7) <<endl;
}