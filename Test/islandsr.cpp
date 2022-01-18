#include <bits/stdc++.h>
using namespace std;


struct coordinates{
    long long x1,y1,x2,y2;
};

struct res{
    int a,b;
};

bool compare(res x,res y){
    return x.a < y.a;
}

int main(){
    int c;
    cin>>c;
    
    coordinates arr[c];
    
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
    
    res v[c];
    
    for(int i = 0 ; i < c ; i++){
        int one = min(abs(x-arr[i].x1),abs(x-arr[i].x2));

        int two = min(abs(y-arr[i].y1),abs(y-arr[i].y2));
        
        int ins = sqrt((one*one) + (two*two));
        
        v[i].a = ins;
        v[i].b = i+1;
    }
    
    sort(v,v+c,compare);
    
    for(int i = 0 ; i < c ; i++){
        cout<<v[i].b<<" ";
    }
    //cout<<endl;
}