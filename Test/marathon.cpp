#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    int T;
    cin>>N>>T;
    int t=0;
    int winner;
    int comp = INT_MIN;
    int two;
    int four;
    int six;
    while(N--){
        int *arr = new int[T+1];
        for(int i=0;i<T+1;i++){
            cin>>arr[i];
        }
        int dist = arr[T];
        for(int i=0;i<T;i=i+2){
            if(i%2 == 0 && i!=0){
                for(int k=0;k<i;k++){
                    t=t+arr[k]*dist;
                }
                
                if(t > comp){
                    comp = t;
                    winner = N;
                }   
            }
        }
        t=0;
        delete [] arr;
    }
    
}