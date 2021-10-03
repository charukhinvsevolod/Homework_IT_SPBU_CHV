#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;

	cout << "Enter data:" << endl;
	cin >> a;
	cout << "Exit data:" << endl;

	for (int i = 1; i <= a; ++i)
	{
		if (a % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}