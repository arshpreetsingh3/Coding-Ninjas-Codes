#include<bits/stdc++.h>
using namespace std;
int main(){
    char a='a';
    cout<<sizeof('ab');
    //here asci value of a is stored thus 97 thus 4 acc to vid
    //but actually len in between single quotes is 
    //thus 'a' is 1
    cout<<sizeof(a);
    //here a is variable name for charecter dataype
    cout<<sizeof("a");
    //here a is a string which has a and also null 
    //thus 2 here 
    //op should be 4 1 2 rather than 1 1 2
    // but in this 1 1 2 is coming

}