#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubsetWithSumO(int*arr,int size){
    unordered_map<int,int> m;
    int sum=0;
    int len =0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(arr[i]==0 && len==0){
            len = 1;
        }
        if(sum == 0){
            len = i+1;
        }
        if(m.count(sum)==0){
            m[sum]=i;
        }else{
            len = max(len,i-m[sum]);
        }
    }
    return len;
}
int main(){
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int ans = lengthOfLongestSubsetWithSumO(arr,8);
    cout<<ans<<endl;
}