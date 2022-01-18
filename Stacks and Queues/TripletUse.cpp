#include <iostream>
using namespace std;
#include "Triplet.cpp"

int main() {

	Triplet<int, double, char> p2;
	p2.setY(20.00);
	p2.setX(5);
	p2.setZ('a');


	cout << p2.getX()<< " " << p2.getY() << " " << p2.getZ() << endl;

	/*
	Pair<int, double> p1;
	p1.setX(100.34);
	p1.setY(100.34);

	cout << p1.getX() << " " << p1.getY() << endl;
	*/
	/*
	Pair<int> p1;
	p1.setX(10);
	p1.setY(20);

	cout << p1.getX() << " " << p1.getY() << endl;

	Pair<double> p2;

	p2.setX(100.34);
	p2.setY(34.21);
	cout << p2.getX() << " " << p2.getY() << endl;

	Pair<char> p3;
	*/

}

