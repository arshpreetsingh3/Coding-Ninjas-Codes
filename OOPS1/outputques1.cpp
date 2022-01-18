#include <iostream>
using namespace std;

class Students {
    public:
    int rollNumber;
    //here if its made public then it'll give garbage value otherwise if its provate then it'll be a compilation error
};

int main() {
    Students s;
    cout << s.rollNumber;
}