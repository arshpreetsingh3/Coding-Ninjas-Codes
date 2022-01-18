#include<bits/stdc++.h>
using namespace std;
int sum(int input[], int n) {
  
    int a=0;
    int total=0;
	if (n <= 0 ) {
		return 0;
	}


  if(n == 1)
    {
      a=(*input);
     return a;
    }
	else{
      total=sum(input+1,n-1)+input[0];
    }
    return total;
	 
}
int main(){

    int a[5];
    for(int i=0;i<5;i++){
      cin>>a[i];
    }
    cout<<"the sum of the array is"<<sum(a,5);
}
