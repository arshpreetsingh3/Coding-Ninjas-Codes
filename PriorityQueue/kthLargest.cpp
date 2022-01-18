#include<bits/stdc++.h>
#include<queue>
using namespace std;
int kthLargest(vector<int> arr,int n,int k){
    priority_queue<int , vector<int> ,greater<int> > pq;
    //this is amin priority queue
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        int maxx = pq.top();
        if(maxx <arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ele = pq.top();
    //return ele;
    return pq.top();
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(8);
    v.push_back(7);
    v.push_back(11);
    v.push_back(3);
    int ans = kthLargest(v,6,2);
    cout<<ans<<endl;
}