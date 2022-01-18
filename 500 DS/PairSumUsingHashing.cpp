#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
void findPair(int *arr,int n,int sum){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        if(map.find(sum-arr[i])!=map.end()){
            cout <<"Pair found at index" << map[sum-arr[i]] <<"and" << i ;
    
        }
        map[arr[i]] = i;
    }
}
int main(){
    int arr[]={8,7,2,5,3,1};
    int sum = 10;
    int n = 6;
    findPair(arr,n,sum);
}