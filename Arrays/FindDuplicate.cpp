#include<bits/stdc++.h>
using namespace std;
//Base version
int duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
}
//using the info of n
void printRepeating(int arr[], int size)  
{  
    //int *count = new int[sizeof(int)*(size - 2)];  
    int *count= new int[size - 2];
    for(int i=0;i<size-2;i++){
        count[i]=0;
    }
    int i;  
          
    cout << " Repeating elements are ";  
    for(i = 0; i < size; i++)  
    {  
        if(count[arr[i]] == 1)  
            cout << arr[i] << " ";  
        else
            count[arr[i]]++;  
    }
} 
int main(){
    int arr[]={0,7,2,5,4,7,1,3,6};
    //cout << duplicate(arr,9)<<endl;
    printRepeating(arr,9);
}
