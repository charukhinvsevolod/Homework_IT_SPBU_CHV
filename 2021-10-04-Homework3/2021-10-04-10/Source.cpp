#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cout << "Enter data:" << endl;
	cin >> a >> b;
	cout << "Exit data:" << endl;

	if (a <= 1 && 1 <= b)
	{
		cout << 1 << " ";
	}

	for (int i = a; i <= b; ++i)
	{
		for (int j = 1; j <= i / 2; ++j) 
		{
			if (j * j == i)
			{
				cout << i << " ";
			}
		}
	}
	cout << endl;



	return EXIT_SUCCESS;
}