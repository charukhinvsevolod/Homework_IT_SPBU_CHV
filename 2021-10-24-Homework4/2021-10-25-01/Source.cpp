#include<iostream>

using namespace std;

int main(int arc, char* argv[])
{
	int a[100];
	int n = 0;
	int sum = 0;
	int prn = 0;
	int fmi = 0;
	int max = 0;
	int max2 = 0;

	cout << "Enter data" << endl;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << "Exit data:" << endl;

	cout << "ARRAY: ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "EVEN: ";
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
	cout << endl;

	cout << "SUM: ";
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	cout << sum << endl;

	cout << "PRODUCT OF NEGATIVE: ";
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			prn = 1;
		}
	}
	if (prn == 0)
	{
		cout << "there are no negative" << endl;
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			if (a[i] < 0)
			{
				prn *= a[i];
			}
		}
		cout << prn << endl;
	}
	
	cout << "FIRST MIN INDEX: ";
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < a[fmi])
		{
			fmi = i;
		}
	}
	cout << fmi << endl;

	cout << "SECOND MAX: ";
	max = a[fmi];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	max2 = a[fmi];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max2 && a[i] < max)
		{
			max2 = a[i];
		}
	}
	cout << max2 << endl;

	cout << "REVERSE: ";
	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "ODD INDEX: ";
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 != 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}