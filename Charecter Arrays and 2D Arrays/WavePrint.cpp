#include<bits/stdc++.h>
using namespace std;
void wavePrint(int arr[][10],int row,int col){
    if(row == 0){
        return;
    }
    int norow = row;
    int numcol = col;
    for(int j=0;j<numcol;j++){
        if( j % 2 == 0){
            for(int i=0;i<norow;i++){
                cout <<arr[i][j]<<" ";
            }
        }else{
            for(int i = row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }

    }
}
int main(){
 int m,n;
 cin>>m>>n;
 int arr[10][10];
 for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
         cin>>arr[i][j];
     }
 }
 wavePrint(arr,m,n);
}