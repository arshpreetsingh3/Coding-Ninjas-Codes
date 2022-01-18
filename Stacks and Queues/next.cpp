#include<bits/stdc++.h>
using namespace std;

void nextlarger(long long int arr[], int n){
    stack<int> s;
    long long int clone[n];
    s.push(0);
    
    for(int i = 1 ; i < n ; i++){
        while(!s.empty() && arr[i] > arr[s.top()]){
            clone[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    
    while(!s.empty()){
        clone[s.top()] = -1;
        s.pop();
    }
    
    for(int i = 0 ; i < n ; i++){
        cout<<clone[i]<<" ";
    }
}

int main()
{
	int t;
	cin>>t;
	
	while(t--){
	    long long int n;
	    cin>>n;
	    
	    long long int arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin>>arr[i];
	    
	    
	    nextlarger(arr,n);
	    cout<<endl;
	}
	return 0;
}