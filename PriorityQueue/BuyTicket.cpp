#include<bits/stdc++.h>
using namespace std;
int buyTicket(int *arr,int n,int k){
    priority_queue<int> pq;
    queue<int> q;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        q.push(arr[i]);
    }
    int count = 0 ;
    while(!pq.empty()){
        int front = q.front();
        int top = pq.top();
        if(front  == top){
            q.pop();
            pq.pop();
            count++;
            if(k==0){
                return count;
            }else{
                k--;
            }
        }else{
            q.push(q.front());
            q.pop();
            if(k==0){
                k= q.size()-1;
            }else{
                k--;
            }    
        }
    }
        
        return count;
    
}
int main(){
    int arr[]={3,9,4};
    int ans  = buyTicket(arr,3,2);
    cout<<ans;
}