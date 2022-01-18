#include<bits/stdc++.h>
using namespace std;
vector<int> kSmallest(int *input,int n,int k ){
    priority_queue<int> pq;\
    //max heap gives max element at rooot
    vector<int> v;
    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }
    for(int i=k;i<n;i++){
        int maxx = pq.top();
        if(maxx>input[i]){
            pq.pop();
            pq.push(input[i]);
        }
    }
    while(!pq.empty()){
        int ele = pq.top();
        pq.pop();
        v.push_back(ele);
    }
    return v;
}
int main(){
    int input[]={2 ,12 ,9 ,16 ,10, 5 ,3 ,20 ,25 ,11 ,1 ,8 ,6 };
    vector<int> ans = kSmallest(input,13,4);
    for(int i=0;i<4;i++){
        cout<<ans[i]<<endl;
    }
}