#include<bits/stdc++.h>
using namespace std;
int count_zeros(int num){
	if(num>0){
		if( (num % 10) == 0){
			return  count_zeros(num/10)+1;
		}
		return count_zeros(num/10);
	}	
	
}

int main(){

    int n;
    cin>>n;
    int ans = count_zeros(n);
    cout<<ans;

}