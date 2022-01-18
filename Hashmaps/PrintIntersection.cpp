#include<bits/stdc++.h>
using namespace std;
void intersection(int input1[],int input2[],int size1,int size2){
    unordered_map<int,int> seen;
    for(int i=0;i<size1;i++){
        seen[input1[i]]++;
    }
    for(int i=0;i<size2;i++){
        if(seen[input2[i]]>0){
            seen[input2[i]]--;
            cout<<input2[i]<<endl;
        }
    }
}
int main(){
    int arr1[]={2,6,8,5,4,3};
    int arr2[]={2,3,4,7};
    intersection(arr1,arr2,6,4);
}