#include<bits/stdc++.h>
using namespace std;
void printnge( long long int arr[],long long int n){
    stack<int> s;
    s.push(arr[0]);
    for(long long int i=1;i<n;i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(s.empty() == false && s.top() <arr[i]){
            cout<< s.top() << "-->" <<arr[i] <<endl;
            s.pop();
        }
        s.push(arr[i]);
    }
        while(!s.empty()){
            cout<<s.top()<<"-->"<<-1<<endl;
            s.pop();
        }
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--){
            long long int n;
            cin>>n;
            long long int *arr = new long long int[n];
            for(long long int i=0;i<n;i++){
                cin>>arr[i];
            }
            printnge(arr,n);
        }
       
    }
