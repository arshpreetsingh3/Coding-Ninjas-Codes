#include<bits/stdc++.h>
using namespace std;
void printPairs(int *input,int n,int k){
    
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[input[i]]++;
    }
    for(int i=0;i<n;i++){
        int key = input[i];
        if(k==0){
            int a = m[key];
            int count = ((a-1)*a)/2;
            for(int j=0;j<count;j++){
                cout<< key <<" " <<key <<endl;
            }
        }else{
            int a = key+k;
            int b = key-k;
            int count =m[key];
            int count1 = m[a];
            int count2 = m[b];
            for(int j=0;j<count*count1;j++){
                cout<<min(a,key)<<" "<<max(a,key)<<endl;
            }
            for(int j=0;j<count*count2;j++){
                cout<<min(b,key)<<" "<<max(b,key)<<endl;
            }
        }
        m.erase(key);
    }
}
int main(){
    int arr[4]={5,5,2,4};
    printPairs(arr,4,0);
}