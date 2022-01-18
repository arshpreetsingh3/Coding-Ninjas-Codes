#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10][10],c[10];
    int m,n;
    cin >> m>>n; 
    //taking input 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            
       }
    }
    //ROW WISE SUM
    cout<<"Row wise sum";
    int rsum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            rsum = rsum+a[i][j];
        }
        cout << rsum <<" ";
        rsum =0;
    }
    
    //COLUMN WISE SUM
    cout<<"Column wise sum";
    int sum =0;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            sum = sum+a[i][j];
        }
        cout << sum <<" ";
        sum =0;
    }

}