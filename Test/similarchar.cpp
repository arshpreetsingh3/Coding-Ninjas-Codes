#include<bits/stdc++.h>
using namespace std;
int nooccurences(string str,char tobefound,int position){
 int ans=0;
 for(int i = 0  ; i <= position ;i++){
     if(str[i] == tobefound){
         ans++;
     }
 }
 return ans;
}
int main(){
    int N;
    cin>>N;
    string str;
    cin>>str;
    int Q;
    cin>>Q;
    while(Q--){
        int P;
        cin>>P;
        if(P<=N){
         char tobefound = str[P-1];
         cout<<nooccurences(str,tobefound,P-2)<<endl;
        }
    }
    return 0;
}
