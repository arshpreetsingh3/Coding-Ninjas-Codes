#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    int count = 2,current;
    bool isDec = true;
    while(count <= n){
        cin >> current;
        if(current == prev){
            cout<<"False";
            return 0;
        }
        count++;
        if(current < prev){
            if(isDec == false){
                cout << "False";
                return 0;
            }
        }
        else{
            if(isDec == true){
                cout<<"false";
            }
        }
        prev = current;
    }
    cout<<"true";
}