#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	int n = 0;
	int k = 0;

	cout << "Enter data:" << endl;
	cin >> n;
	cout << "Exit data:" << endl;
	
	/* если n >= 0, то (n / 2) * 2 = n (если чётное) либо n - 1 (если нечётное)
	если n < 0, то (n / 2) * 2 = n (если чётное) либо n + 1 (если нечётное)
	если n >= 0, то искомое число (n / 2) * 2 + 2
	если число n < 0 то искомое число ((n - 1) / 2) * 2 + 2
	*/
	cout << ((n / 2) * 2 + 2) *  (((2 * n + 1) % 2) + 1) / 2 +
		(((n - 1) / 2) * 2 + 2) * (-1) * (((2 * n + 1) % 2) - 1) / 2 << endl;

	return EXIT_SUCCESS;
}