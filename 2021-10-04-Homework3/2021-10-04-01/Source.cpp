#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int factn = 0;

	cout << "Enter data:" << endl;
	cin >> n;
	cout << "Exit data:" << endl;

	factn = 1;
	for (int i = 1; i <= n; ++i)
	{
		factn = factn * i;
	}

	cout << factn << endl;

	return EXIT_SUCCESS;
}