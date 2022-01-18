#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    string str;
    cin>>str;
    int Q;
    cin>>Q;
    int freq[26];
    for(int i = 0 ; i < 26 ; i++)
        freq[i] = 0;
    int arr[N];
    arr[0] = 0;
    freq[str[0]-'a']++;
    
    for(int i = 1 ; i < N ; i++){
        arr[i] = freq[str[i]-'a'];
        freq[str[i]-'a']++;
    }
    
    while(Q--){
        int P;
        cin>>P;
        cout<<arr[P-1]<<endl;
    }
    return 0;
}