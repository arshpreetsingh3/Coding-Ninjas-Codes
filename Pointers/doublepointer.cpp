#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;
  int r = 100;
int *t = &r;
int **v = &t;
int x = (**v)++ + 4;
cout << r << " " << x << endl;
}
//doubt