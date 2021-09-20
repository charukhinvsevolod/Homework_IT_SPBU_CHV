#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	int v = 0;
	int t = 0;
	int s = 109;

	cout << "Enter data:" << endl;
	cin >> v >> t;
	cout << "Exit data:" << endl;
	cout << (v * t - (v * t / s) * s) * ((2 * v + 1) % 2 + 1) / 2
		- (109 + (v * t - (v * t / s) * s)) * ((2 * v + 1) % 2 - 1) / 2 << endl;

	return EXIT_SUCCESS;
}