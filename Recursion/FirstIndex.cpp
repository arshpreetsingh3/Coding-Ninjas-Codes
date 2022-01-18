#include<bits/stdc++.h>
using namespace std;
int finder(int a[],int n,int x){
    int ans=0;
    if(n==0){
        return -1;
    }
    if(a[0]==x){
        return 0;
    }else{
        ans = finder(a+1,n-1,x);
        if(ans == -1){
                return ans;
             }
        else{
                return ans+1;
        }
    }
    
}
int main(){
 int n=4,a[4]={9,8,10,8},x=8;
 int answer = finder(a,n,x);
 cout<<"The first index of the element searched is x"<<answer<<endl;
}