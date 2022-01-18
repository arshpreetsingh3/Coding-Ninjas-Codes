#include<bits/stdc++.h>
using namespace std;
void print2Darray(int arr[][3],int row,int col){
    int k = row;
    for(int i=0;i<row;i++){
        for(int l=k-1;l>=0;l--){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        k--;
    }
}
int main(){
    int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    print2Darray(arr,3,3);
}