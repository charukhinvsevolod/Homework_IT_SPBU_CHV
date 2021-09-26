#include<iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int k = 0; //На сковородку одновременно можно положить k котлет
	int m = 0; //Каждую котлету нужно с каждой стороны обжаривать m минут непрерывно
	int n = 0; //К-во котлет
	int min = 0;

	cout << "Enter data:" << endl;
	cin >> k >> m >> n;
	cout << "Exit data:" << endl;

	n = 2 * n;
	min = (n / k) * m;
	if (n <= k)
	{
		cout << 2 * m;
	}
	else
	{
		if (n % k != 0)
		{
			min = min + m;
		}
		cout << min << endl;
	}
	


	return EXIT_SUCCESS;
}