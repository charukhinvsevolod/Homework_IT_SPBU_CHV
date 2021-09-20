#include<iostream>

using namespace std;

int main(int arcg, char* argv) {
	int x = 0;
	int x2 = 0;

	cout << "Enter data" << endl;
	cin >> x;
	//x^4 + x^3 + x^2 + x + 1 == (x^2 + x)*(x^2 + 1) + 1
	x2 = x * x;
	cout << "Exit data" << endl;
	cout << (x2 + x) * (x2 + 1) + 1 << endl;


	return EXIT_SUCCESS;
}