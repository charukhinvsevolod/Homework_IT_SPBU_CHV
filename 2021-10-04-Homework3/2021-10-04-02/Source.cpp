#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int n2 = 0;

	cout << "Enter data:" << endl;
	cin >> n;
	cout << "Exit data:" << endl;

	n2 = 1;
	for (int i = 0; i < n; ++i)
	{
		n2 = n2 * 2;
	}

	cout << n2 << endl;

	return EXIT_SUCCESS;
}