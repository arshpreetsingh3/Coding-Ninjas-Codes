#include<bits/stdc++.h>
using namespace std;
void FindTriplet(int arr[],int size,int x){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i] + arr[j] +arr[k] == x){
                    if(arr[i]<= arr[j] && arr[i] < arr[k]){
                        cout<<arr[i]<<" ";
                        if(arr[j]<arr[k])
                            cout << arr[j]<<" "<<arr[k];
                        else
                            cout<<arr[k] <<" "<<arr[j];
                        
                }else if(arr[j]<=arr[i] && arr[j]<=arr[k]){
                    cout<<arr[j]<<" ";
                    
                    if(arr[i]<arr[k]){
                        cout<<arr[i]<<" "<<arr[k];
                    }else
                    {
                        cout<<arr[k]<<" "<<arr[i];
                    }
                    
                }else{
                    cout<<arr[k]<<" ";
                    if(arr[i]<arr[j])
                        cout<<arr[i]<<" "<<arr[j];
                    else
                    {
                        cout<<arr[j]<<" "<<arr[i];
                    }
                    
                }
                cout<<endl;
            }
        }
    }
}
}
int main(){
   int arr[]={1,2,3,4,5,6,7};
   FindTriplet(arr,7,12);
}