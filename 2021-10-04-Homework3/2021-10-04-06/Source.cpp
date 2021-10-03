#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int n = 0;
	int k1 = 0;
	int k0 = 0;
	int k_1 = 0;

	cout << "Enter data:" << endl;
	cin >> n; //вводим к-во чисел
	
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		if (a == 0)
		{
			++k0;
		}
		else if (a > 0)
		{
			++k1;
		}
		else
		{
			++k_1;
		}
	}

	cout << "Exit data:" << endl;
	cout << k1 << " " << k_1 << " " << k0 << endl;

	return EXIT_SUCCESS;
}