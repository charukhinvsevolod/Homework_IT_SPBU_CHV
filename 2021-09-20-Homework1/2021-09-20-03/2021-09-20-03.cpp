#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	int n = 0;
	int k = 0;

	cout << "Enter data:" << endl;
	cin >> n >> k;
	cout << "Exit data:" << endl;
	cout << n % k << endl;

	return EXIT_SUCCESS;
}