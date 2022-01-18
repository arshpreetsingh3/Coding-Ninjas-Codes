#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n){
    int *output = new int[n];
    output[0]= 1;
    for(int i =1;i<n;i++){
        output[i]=1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                continue;
            }
            int possibleans = output[j]+1;
            if(possibleans > output[i]){
                output[i]  = possibleans;
            }
        }
    }
    int best =0;
    for(int i=0;i<n;i++){
        if(best < output[i]){
            best = output[i];
        }
    }
    delete [] output;
    return best;

}
int main(){
 int arr[]={5,4,11,1,16,8};
 int ans = lis(arr,6);
 cout<<ans;
}