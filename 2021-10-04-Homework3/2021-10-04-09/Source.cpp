#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cout << "Enter data:" << endl;
	cin >> a >> b >> c >> d;
	cout << "Exit data:" << endl;

	for (int i = a; i <= b; ++i)
	{
		if (i % d == c)
		{
			cout << i << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}