#include<bits/stdc++.h>
using namespace std;
void findLargest(int arr[][10],int row,int col){
    bool isRow = true;
    int largestsum = INT_MIN;
    int num=0;
    for(int i=0;i<row;i++){
        int rowSum = 0;
        for(int j=0;j<col;j++){
            rowSum+=arr[i][j];
        }
        if(rowSum > largestsum){
            largestsum = rowSum;
            num = i;
        }
    }
    for(int j=0;j<col;j++){
        int colSum = 0;
        for(int i=0;i<row;i++){
            colSum+=arr[i][j];
        }
        if(colSum > largestsum){
            largestsum = colSum;
            num = j;
            isRow = false;
        }
    }
    if(isRow){
        cout<<"row"<<" "<<num<<" "<<largestsum <<endl;
    }else{
        cout<<"column"<<" "<<num<<" "<<largestsum<<endl;
    }
}
int main(){
    int arr[10][10];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    findLargest(arr,m,n);
}