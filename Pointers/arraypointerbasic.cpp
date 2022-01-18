#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1, 2, 3, 4};
     cout << *(a) << " " << *(a+1)<<endl;

    int b[6] = {1, 2, 3};
cout <<  b<< " " << &b<<endl;

   int c[6] = {1, 2, 3};
cout <<c <<" "<< (c + 2)<<endl;

   int d[6] = {1, 2, 3};
int *poin = d;
cout << poin[2];
}