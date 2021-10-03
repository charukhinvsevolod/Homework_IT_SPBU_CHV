#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int sum = 0;

	cout << "Enter data:" << endl;
	cin >> n; //вводим к-во чисел

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		sum += a;
	}

	cout << "Exit data:" << endl;
	cout << sum << endl;

	return EXIT_SUCCESS;
}