#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int val){
 int index;
 bool flag = false;
 for(int i=0;i<n;i++){
     if(arr[i]==val){
         flag = true;
         index = i;
         break;
     }
 }
 if(flag){
     return index;
 }else{
     return -1;
 }
}
int main(){
 int arr[] = { 4,3,2,1};
 cout << linearSearch(arr,4,5);
}