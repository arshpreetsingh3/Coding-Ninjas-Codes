#include<bits/stdc++.h>
using namespace std;
void SpiralPrint(int arr[][4],int row,int col){
    int i,rowstart = 0,colstart = 0;
    int numelements = (row*col),count = 0;
    while(count < numelements){
        for(i = colstart;count<numelements && i<col;i++){
            cout << arr[rowstart][i]<<" ";
            count++;
        }
        rowstart++;
        for( i = rowstart;count < numelements && i<row;i++){
            cout <<arr[i][col-1]<<" ";
            count++;
        }
        col--;
        for(i = col - 1;count < numelements && i>= colstart;i--){
            cout<<arr[row-1][i]<<" ";
            count++;
        }
        row--;
        for(i = row -1;count<numelements && i>=rowstart;i--){
            cout<<arr[i][colstart]<<" ";
            count++;
        }
        colstart++;
    }
}
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    SpiralPrint(arr,4,4);
}