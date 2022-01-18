#include<bits/stdc++.h>
using namespace std;
class MyStack{
    stack<int> s;
    int minele;
    public:
    int getmin(){
        if(s.empty()){
            return -1;
        }else{
            return minele;
        }
    }
    int pop(){
        if(s.empty()){
            return -1;
        }
        int t = s.top();
        s.pop();
        int k;
        if(t<minele){
            k = minele;
            minele = 2*minele - t;
            return k;
        }
        else return t;
    }
    void push(int x){
        if(s.empty()){
            minele = x;
            s.push(x);
            return;
        }
        if(x < minele){
            s.push(2*x - minele);
            minele = x;
        }else{
            s.push(x);
        }
    }
};
int main(){
    MyStack s;
    s.push(3);
    s.push(5);
    int d = s.getmin();
    cout<<d<<endl;
    s.push(2);
    s.push(30);
    s.push(1);
    int t = s.getmin();
    cout<<t<<endl;
    int r= s.pop();
    cout<<r<<endl;
    int f = s.getmin();
    cout<<f<<endl;
}
