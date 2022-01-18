#include<bits/stdc++.h>
using namespace std;
#include "Student.cpp"

int main(){

    Student s1; //Default constructor called

    Student s2(101); // Parametrized Constructor called 

    Student s3(20,30); //Constructor 3 called 

    Student s4(s3); //Copy Constructor in which values of s3 are copied in s4

    s1 = s2; //Copy assignment operator whhich can only be used if both objects are created before hand

    Student s5 = s4; //Also kind of copy constructor just can get broken into two steps 
      //Student s4;
      //s5 = s4;
      //or we can say Student s5(s4);
}