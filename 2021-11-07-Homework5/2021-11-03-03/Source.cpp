#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int x1 = 0;
	int i = 0;

	cin >> x;

	if (x < 0)
	{
		x = ~x;
		while ((x >> i) & 1 != 0)
		{
			++i;
		}
		x = ((x >> i) | 1) << i;
	}

	cout << x << endl;

	return EXIT_SUCCESS;
}