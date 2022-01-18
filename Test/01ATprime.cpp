#include<bits/stdc++.h>
using namespace std;
void primegenerator(){
     int i,p,n,j,d;
    cin>>d;
    
    int arr[100]={0};
    
    /*for(int i=0;i<100;i++){
        arr[i]=0;
    }*/
   for(i=2;i<=d && d<=100;i++){
       n=i;
       p=1;
       j=2;
       for(;j<=n/2;j++){
           if(n % j == 0){
               p=0;
               break;
           }
       }

       if(p>=1){
           //cout<<n<<endl;
           arr[i]=n;
       }   
   }
   /*
   for(int i=0;i<100;i++){
       if(arr[i]==0){
           continue;
       }else{
       cout<< arr[i];
   }
   }*/
   int check[5]={1,0,1,1};
   int count0 = 0,count1=0;
   for(int j=0,i=0;j<5 && i<5;j++,i++){
       if(arr[i]==0){
           continue;
       }else{
            if(check[j]==1 && j==arr[j]){
                count1++;
             }
            else if(check[i]==0){
            count0++;
        }
       }
   }
   cout<<"count of 1's at prime indices : "<<count1 <<" and count of 0's at prime indices : "<<count0;
}
int main(){
    primegenerator();
}