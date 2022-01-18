#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int evens = 0,odds = 0;
    while(num > 0 ){
        int lastdigit = num %10;
        if(lastdigit % 2 == 0 ){
            evens+= lastdigit;
        }else{
            odds += lastdigit;
        }
        num = num/10;
    }
    cout<< evens << " " << odds;
}
