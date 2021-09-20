#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	int a = 0;
	int b = 0;

	cout << "Enter data:" << endl;
	cin >> a >> b;
	cout << "Exit data:" << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << endl << b << endl;

	return EXIT_SUCCESS;
}