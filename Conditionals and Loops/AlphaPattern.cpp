#include <iostream>
using namespace std;

int main()
{
    int input;
    char alphabet = 'A';
    cin >> input;

    for(int i = 1; i <= input; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << alphabet;
        }
        alphabet++;

        cout << endl;
    }
    return 0;
}