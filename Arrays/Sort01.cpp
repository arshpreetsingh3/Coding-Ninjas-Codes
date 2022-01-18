#include<bits/stdc++.h>
using namespace std;
void Sort01(int *Arr,int n){
    int ptr=0;
    for(int i=0;i<n;i++){
        if(Arr[i]==0){
            int temp = Arr[ptr];
            Arr[ptr] = Arr[i];
            Arr[i]=temp;
            ptr++;
        }
    }
}
void SortZeroesAndOne(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Update in the given array itself. Don't return or print anything.
     * Taking input and printing output is handled automatically.
     *//*
    int i=0,j=n-1,temp,flag=0;
    while(i<j){
      if(arr[i]==1 && arr[j] == 0)
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
 
      if(i==j)
      {
        break;
      }
  
      
        i++;
        j--;
      */
      int left = 0, right = n-1;
 
    while (left < right)
    {
        /* Increment left index while we see 0 at left */
        while (arr[left] == 0 && left < right)
            left++;
 
        /* Decrement right index while we see 1 at right */
        while (arr[right] == 1 && left < right)
            right--;
 
        /* If left is smaller than right then there is a 1 at left
          and a 0 at right.  Exchange arr[left] and arr[right]*/
        if (left < right)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
    
}
int main(){
 int arr[]={0,1,0,0,1,1,1,0};
 //Sort01(arr,8);
  SortZeroesAndOne(arr,8);
 for(int i=0;i<8;i++){
     cout<<arr[i]<<" ";
 }
}