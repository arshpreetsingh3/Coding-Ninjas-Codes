#include<bits/stdc++.h>
using namespace std;
int sum(int *arr,int size)
{
//Write code here 
    int sum=0;
    int digsum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    if(sum < 10){
        return sum;
    }else{
        /* int fsum=0;
        while(sum>0 || fsum >9){
        if(sum == 0){
            sum = fsum;
            fsum = 0;
        }
        fsum += sum%10;
        sum = sum/10;
        */
       return (sum % 9 == 0) ? 9 : (sum % 9);
    }
    return sum;
    }
   

int main(){
    int arr[]={1,7,8,5,9};
    cout << sum(arr,5) <<endl;
}