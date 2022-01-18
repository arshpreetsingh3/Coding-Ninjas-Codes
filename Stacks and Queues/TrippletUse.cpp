#include <iostream>
using namespace std;
#include "Pair.cpp"

int main() {

	Pair<Pair<int, double>, char> p2;
	p2.setY('a');
	Pair<int, double> p4;
	p4.setX(5);
	p4.setY(16.66);

	p2.setX(p4);

	cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;

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

