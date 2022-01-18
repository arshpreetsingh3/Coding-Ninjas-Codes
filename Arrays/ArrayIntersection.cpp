#include<bits/stdc++.h>
using namespace std;
void intersection(int arr1[],int arr2[],int n1,int n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr2[j]<<endl;
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
}
int main(){
    int arr1[]={2,6,8,5,4,3};
    int arr2[]={2,3,4,7};
    intersection(arr1,arr2,6,4);
}