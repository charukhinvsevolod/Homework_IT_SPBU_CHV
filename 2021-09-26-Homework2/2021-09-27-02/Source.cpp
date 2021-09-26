#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int y = 0;

	cout << "Enter data:" << endl;
	cin >> y;
	cout << "Exit data:" << endl;

	if (y % 400 == 0)
	{
		cout << "YES" << endl;
	}
	else if ((y % 4 == 0) && (y % 100 != 0))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return EXIT_SUCCESS;
}