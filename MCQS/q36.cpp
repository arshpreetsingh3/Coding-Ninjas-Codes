#include<bits/stdc++.h>
using namespace std;
struct stu{
    int x;
    int y;
}a;
union stud{
    int x;
    int y;
}b;
int main(){
  cout<<sizeof(a);
  cout<<sizeof(b);
}
//structure variables are not initialised within the structures
//struct stu{
//   int a=100;
//}a;
//this would lead to error,we can assign values only to variables
//like 
//struct stu{
//   int a;
//}a={1};
//static members are not decalred within structure \
//because in structures mem is allocated together but static variables are stored in data segment
//struct stu{
//    static int a;
//}
//will lead to error
