#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int f;
      double t;
     int basic,allow;
    char grade;
    cin >> basic >> grade;
    if(grade=='A'){
      allow=1700;
    }else if(grade=='B'){
      allow=1500;
    }else {
      allow = 1300;
    }
    double hra = (0.2)*basic;
    double da = (0.5)*basic;
	double pf = (0.11)*basic;
    t=basic+hra+da+allow-pf;
	f=round(t);
	cout<<f<<endl;
}
