#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	Student s1;

	s1.display();
	
	Student s2;
	Student *s3 = new Student;
	s3 -> display();

	cout<< "Parametrized Constructor Demo"<<endl;
	Student s4(53);
	s4.display();

	Student *s5 = new Student(23);
	s5->display();

	Student s6(1,20);
	Student *s7 = new Student(25,25);
	s6.display();
	(*s7).display();
	s7->display();

	Student s8(10,1001);
	cout<<"Address of s8 : " <<&s8 <<endl;
}

