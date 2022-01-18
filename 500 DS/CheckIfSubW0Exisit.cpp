#include<bits/stdc++.h>
using namespace std;
bool ZeroSumSubarray(int arr[],int n){
    //creating empty set to store sum of elements of each subarry from 0 to i where 0 <=i<=n
    unordered_set<int> set;
    set.insert(0);
    int sum = 0;
    //traverse thru array 
    for(int i=0;i<n;i++){
        sum +=arr[i];
        //if sum is seen before we have found sub array with 0 sum 
        if(set.find(sum) != set.end()){
            return true;
        }else{
            //insert sum so far into the set 
            set.insert(sum);
        }
    }
    //we raech here when no sub array with sum 0 exists 
    return false;

}
int main(){
    int arr[]={ 4,2,-3,-1,0,4};
    int n = 6;
    if(ZeroSumSubarray){
        cout<<" Subarray exists";
    }else{
        cout<<"Subarray doenst exist";
    }
}