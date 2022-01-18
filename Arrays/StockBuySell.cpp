#include<bits/stdc++.h>
using namespace std;
class interval{
    public:
    int buy;
    int sell;
};
void stockbuysell(int price[],int n){
    if(n<2){
        return;
    }
    int count =0;
    interval sol[n/2 +1];
    int i=0;
    while(i<n-1){
        while((i<n-1) && price[i+1]<=price[i]){
            i++;
        }
        if(i == n-1){
            break;
        }
        sol[count].buy = i++;
        while((i<n && price[i]>=price[i-1])){
            i++;
        }
        sol[count].sell = i-1;
        count++;
    }
    if(count==0){
        cout<<"no day possible";
    }else{
        for(int i=0;i<count;i++){
            cout<<"buy day" <<sol[i].buy <<"sell day" <<sol[i].sell<<endl;
        }
    }
}
int main(){
  int price[]={100,180,260,310,40,535,695};
  int n = 7;
  stockbuysell(price,n);
}