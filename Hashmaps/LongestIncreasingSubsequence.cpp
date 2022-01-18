#include<bits/stdc++.h>
using namespace std;
vector<int> longestSub(int *arr,int n){
    unordered_map<int,bool> seen;
    for(int i=0;i<n;i++){
        if(seen.count(arr[i])==0){
            seen[arr[i]]=true;
        }
    }
    vector<int> output;
    int maxCount =1;
    int startNum = arr[0];
    for(int i=0;i<n;i++){
        int count = 0;
        int tempNum = arr[i];
        while(seen.count(tempNum)==1){
            count++;
            tempNum++;
        }
        if(count>maxCount){
            maxCount = count;
            startNum = arr[i];
        }
    }
    output.push_back(startNum);
    maxCount--;
    while(maxCount!=0){
        startNum++;
        output.push_back(startNum);
        maxCount--;
    }
    return output;
}
int main(){
    int arr[] = {15,13,23,21,19,11,16};
    int n = 7;
    vector<int> ans = longestSub(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}