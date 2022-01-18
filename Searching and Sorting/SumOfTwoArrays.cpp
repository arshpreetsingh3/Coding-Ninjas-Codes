#include<bits/stdc++.h>
using namespace std;
void sumOfTwoArrays(int *arr1,int n1,int *arr2,int n2,int *sum){
    int carry = 0;
    int l1 = n1-1,l2 = n2-1;
    int l3 = max(n1,n2);
    while(l3 >= 0 ){
        if(l1>=0 && l2>=0){
            sum[l3] = carry + arr1[l1] + arr2[l2];
            if(sum[l3] > 9){
                carry = 1;
                sum[l3]%=10;
            }else{
                carry = 0;
            }
            l2--;
            l1--;
            l3--;
        }else if(l2<0 && l1>=0){
            sum[l3] = carry + arr1[l1];
            if(sum[l3]>9){
                carry = 1;
                sum[l3]%=10;
            }else{
                carry = 0;
            }
            l1--;
            l3--;
        }else{
            sum[l3] = carry;
        }
    }

}
int main(){
int arr1[]={6,2,4};
int arr2[]={7,5,6};
int sum[4]={0};
sumOfTwoArrays(arr1,3,arr2,3,sum);
for(int i=0;i<4;i++){
    cout << sum[i] <<" ";
}
}
