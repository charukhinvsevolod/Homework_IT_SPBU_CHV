#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	
	cout << "Enter data:" << endl;
	cin >> k;
	cout << "Exit data:" << endl;

	if (k == 1)
	{
		cout << "YES" << endl;
	}
	else if (k % 4 == 0) {
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return EXIT_SUCCESS;
}