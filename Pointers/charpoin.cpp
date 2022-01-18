#include<iostream>
using namespace std;
int main(){
    char b[] = "xyz";
char *c = &b[0];
cout << c << endl;

   char d[] = "xyz";
char *e = &d[0];
e=e+2;
cout << e << endl;

   char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
}