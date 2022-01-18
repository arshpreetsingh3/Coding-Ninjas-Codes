#include<bits/stdc++.h>
using namespace std;
void findIndexes(int input[],int currIndex,int size,int x,int output[],int &k){
    if(currIndex == size){
        return ;
    }
    if(input[currIndex]==x){
        output[k]=currIndex;
        k++;
    }
    findIndexes(input,currIndex+1,size,x,output,k);
    }
int allIndexes(int input[], int size, int x, int output[]) 
{
     int k=0;
     findIndexes(input,0,size,x,output,k);
     return k;
}
int main(){
    int out[5]={0};
    int a[5]={9,8,10,8,8},n=5,x=8;
    int ans = allIndexes(a,n,x,out);
     for(int i=0;i<n;i++){
         cout<<out[i]<<endl;
     }
     cout<<"Total times "<<x<<"occurs in the array is "<< ans <<endl;
}