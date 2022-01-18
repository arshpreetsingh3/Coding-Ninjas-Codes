#include<bits/stdc++.h>
using namespace std;
int getMin(int arr[], int n) 
{ 
  int min = arr[0]; 
  for (int i = 1; i < n; i++) 
   if (arr[i] < min) 
     min = arr[i]; 
  return min; 
} 
  
int getMax(int arr[], int n) 
{ 
  int max = arr[0]; 
  for (int i = 1; i < n; i++) 
   if (arr[i] > max) 
     max = arr[i]; 
  return max; 
} 
bool areConsecutive(int arr[],int n){
    if(n<1){
        return false;
    }
    int min = getMin(arr,n);
    int max = getMax(arr,n);
    if(max-min+1 == n){
        bool *visited = new bool[n];
         //bool *visited = (bool *) calloc (n, sizeof(bool)); 
        /* for(int i=0;i<n;i++){
            visited[i] = false;
        }*/
        for(int i=0;i<n;i++){
            if(visited[arr[i]] - min !=false){
                return false;
            }
            visited[arr[i]-min] = true;
        }
        return true;
    }
    return false;
}
bool minesol(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<j;j++){
            if(arr[j]-arr[i]==1){
                break;
            }
            return false;
        }
    }
    return true;
}
bool bestsol(int arr[],int n){
    int firstTerm = getMin(arr,n);
    int apsum = ( n/2 * (2*firstTerm + (n-1)));
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return apsum == sum;

}
int main(){
   int arr[]={1,2,3,4,5,6};
   bool mans = minesol(arr,6);
   cout<<mans;
   cout<< bestsol(arr,6)<<endl;
   bool ans = areConsecutive(arr,6);
   cout<<ans;
   cout << areConsecutive(arr,6) <<endl;
}