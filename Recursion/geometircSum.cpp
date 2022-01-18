#include<bits/stdc++.h>
using namespace std;
double geometricSum(int k) {
	double value = 0;
	if(k==0)
    {
      return 1;
    }
	else{
        double a=pow(2,k);
		value = 1.0/a + geometricSum(k-1);
	return value;
    }

}



int main(){
    int n;
    cin>>n;
    double ans = geometricSum(n);
    cout<<ans;
}