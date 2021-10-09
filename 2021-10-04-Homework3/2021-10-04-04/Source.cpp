#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int f_n = 0;
	int f_k = 0;
	int f_n_k = 0;

	cout << "Enter data:" << endl;
	cin >> n >> k;
	cout << "Exit data:" << endl;

	f_n = 1;
	for (int i = 1; i <= n; ++i)
	{
		f_n *= i;
	}

	f_k = 1;
	for (int i = 1; i <= k; ++i)
	{
		f_k *= i;
	}

	f_n_k = 1;
	for (int i = 1; i <= n - k; ++i)
	{
		f_n_k *= i;
	}

	cout << f_n / (f_k * f_n_k) << endl;

	return EXIT_SUCCESS;
}