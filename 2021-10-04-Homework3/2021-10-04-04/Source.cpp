#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	double c = 0;
	int C = 0;

	cout << "Enter data:" << endl;
	cin >> n >> k;
	cout << "Exit data:" << endl;

	c = 1;
	C = 1;

	for (int i = 1; i <= n - k; i++)
	{
		double j = i;
		c *= (k + j) / j;
	}

	C = round(c);
	cout << C << endl;

	return EXIT_SUCCESS;
}