#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	int n = 0;
	int k = 0;

	cout << "Enter data:" << endl;
	cin >> n;
	cout << "Exit data:" << endl;
	k = n / 100;
	n = n - k * 100;
	k = k + n / 10;
	n = n - (n / 10) * 10;
	k = k + n;
	cout << k << endl;

	return EXIT_SUCCESS;
}