#include<bits/stdc++.h>
using namespace std;
void printPairs(int arr[],int arr_size,int sum){
    unordered_map<int,int> seen;
    for(int i=0;i<arr_size;i++){
        int temp = sum -arr[i];
        if(seen.count(temp)){
            int x = seen[temp];
            while(x>0){
                cout<< min(temp,arr[i]) << " " <<max(arr[i],temp) <<endl;
                x--;
            }
        }
        seen[arr[i]]++;
    }
}
void PairSum(int *input,int n){
    printPairs(input,n,6);
}
int main(){
    int n=4;
    int input[]={1,5,7,-1};
    PairSum(input,n);
}