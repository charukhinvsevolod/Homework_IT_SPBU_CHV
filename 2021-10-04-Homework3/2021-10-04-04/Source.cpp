#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int factn = 0;
	int factk = 0;
	int factnk = 0;

	cout << "Enter data:" << endl;
	cin >> n >> k;
	cout << "Exit data:" << endl;

	factn = 1;
	for (int i = 1; i <= n; ++i)
	{
		factn = factn * i;
	}

	factk = 1;
	for (int i = 1; i <= k; ++i)
	{
		factk = factk * i;
	}

	factnk = 1;
	for (int i = 1; i <= n - k; ++i)
	{
		factnk = factnk * i;
	}

	cout << factn / (factk * factnk) << endl;

	return EXIT_SUCCESS;
}