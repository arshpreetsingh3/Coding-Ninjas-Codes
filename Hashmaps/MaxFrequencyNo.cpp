#include<bits/stdc++.h>
using namespace std;
int highestFrequency(int *input,int size){
    int max = INT_MIN;
    int key ;
    unordered_map<int,int> seen;
    for(int i=0;i<size;i++){
        seen[input[i]]++;
    }
    for(int i=0;i<size;i++){
        if(seen[input[i]]> max){
            max = seen[input[i]];
            key = input[i];
        }
    }
    return key;
}
int main(){
    int a[]={1,1,1,2,2,3 };
    int size=6;
    int ans = highestFrequency(a,size);
    cout<<ans<<endl;
}