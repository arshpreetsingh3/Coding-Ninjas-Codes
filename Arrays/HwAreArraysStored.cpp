#include <iostream>
#include <climits>
using namespace std;
void print(int arr[],int n){
    cout<<"Function " << sizeof(arr) << endl;
	// Print array
	for(int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

}
int main() {
	// Take array input from the user

	int n;
	cin >> n;

	int input[100];
	   cout<<"Main " << sizeof(input) << endl;
	for(int i = 0; i < n; i++) {
		cin >> input[i];
	}
    print(input,n);

}