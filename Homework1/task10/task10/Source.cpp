#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	int a = 0;
	int b = 0;
	int k1 = 0;
	int k2 = 0;

	cout << "Enter data:" << endl;
	cin >> a >> b;
	cout << "Exit data:" << endl;
	cout << (a + b + (a - b) * ((2 * (a - b) + 1) % 2)) / 2;

	return EXIT_SUCCESS;
}