#include <bits/stdc++.h>
using namespace std;


struct coordinates{
    long long x1,y1,x2,y2;
};

int main(){
    int c;
    cin>>c;
    
    coordinates* arr = new coordinates[c];
    
    for(int i = 0 ; i < c ; i++){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        arr[i].x1=a;
        arr[i].y1=b;
        arr[i].x2=c;
        arr[i].y2=d;
    }
    
    
    long long x,y;
    cin>>x>>y;
    
    vector<pair<int,int> > v;
    
    for(int i = 0 ; i < c ; i++){
        int one = abs(x-arr[i].x1) + abs(y-arr[i].y1);
        int two = abs(x-arr[i].x2) + abs(y-arr[i].y2);
        
        int ins = min(one,two);
        
        v.push_back(pair<int,int>(ins,i+1));
    }
    
    sort(v.begin(),v.end());
    
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i].second<<" ";
    }
    //cout<<endl;
}