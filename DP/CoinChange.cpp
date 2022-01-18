#include<bits/stdc++.h>
using namespace std;
int countWays(int denomination[],int numdenom,int value,int **sol){
    if(sol[numdenom][value] != -1){
        return sol[numdenom][value];
    }
    if(value == 0){
        return 1;
    }
    if(numdenom==0){
        if(value == 0){
            return 1;
        }
        return 0;
    }
    if(value < 0 || value <denomination[0]){
        return 0;
    }
    int temp1 = countWays(denomination,numdenom,value - denomination[0],sol);
    int temp2 = countWays(denomination+1,numdenom-1,value,sol);
    sol[numdenom][value] = temp1+temp2;
    return sol[numdenom][value];
}
int countWays(int denomination[],int numdenom,int value){
    int **sol = new int*[numdenom+1];
    for(int i=0;i<numdenom+1;i++){
        sol[i] = new int[value +1];
    }
    for(int i=0;i<numdenom+1;i++){
        for(int j=0;j<value+1;j++){
            sol[i][j]=-1;
        }
    }
    int res = countWays(denomination,numdenom,value,sol);
    for(int i=0;i<numdenom;i++){
        delete [] sol[i];
        }
     delete [] sol;
     return res;
    
}
int main (){
    int arr[]={1,2,3};
    int ans = countWays(arr,3,4);
    cout<<ans;

}