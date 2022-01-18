#include<bits/stdc++.h>
using namespace std;

void sortelements(int **input,int n,int m){
    int index,swap;
    for(int i=0;i<n;i++){
        index = i;
        for(int j=i;j<n;j++){
            if(input[j][1]<input[index][1]){
                index = j;
            }
        }
        for(int k=0;k<m;k++){
            swap=input[index][k];
            input[index][k]=input[i][k];
            input[i][k]=swap;
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int **input=new int*[n];
    for(int i=0;i<n;i++){
        input[i]=new int[m];
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>input[i][j];
        }
    }
    sortelements(input,n,m);
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< input[i][j]<< " " ;
        }
        cout<<endl;
    }
    return 0;
}
