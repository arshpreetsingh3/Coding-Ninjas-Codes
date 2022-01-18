#include<bits/stdc++.h>
using namespace std;
void swapp(int *arr,int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j] = temp;
}
void Reverse(int *arr,int start,int end){
    int i= start,j=end;
    while(i<j){
        swapp(arr,i,j);
        i++;
        j--;
    }
}
void Rotate(int *arr,int d,int n){
    if(d>=n){
        d=d%n;
    }
    Reverse(arr,0,n-1);
    Reverse(arr,0,n-d-1);
    Reverse(arr,n-d,n-1);
}
void Rotate1(int arr[], int d, int size) {
    
     for (int j = 0; j < d; j++)
     {
        int temp = arr[0];
   		int i;
   		for(i = 0; i < size-1; i++)
  			 arr[i] = arr[i+1];
    
   			arr[i] = temp;
     }
}
int main(){
 int arr[] = {1,2,3,4,5};
 int d = 2;
 //Rotate(arr,d,5);
 Rotate1(arr,d,5);
 for(int i=0;i<5;i++){
     cout << arr[i];
 }
}