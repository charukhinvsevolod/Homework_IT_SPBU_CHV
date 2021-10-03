#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	/*если y -  к-во строк, n - данное в условии число,
	то используя простейшую математику получаем:
	(y^2 + y) / 2 >= n > ((y-1)^2 + y - 1) / 2 
	*/
	int n = 0;
	int k = 0;

	cout << "Enter data:" << endl;
	cin >> n;
	cout << "Exit data:" << endl;

	k = 1;
	for (int y = 1; ((y) * (y) + y) / 2 < n; ++y)
	{
		for (int x = 1; x <= y; ++x)
		{
			cout << k << " ";
			++k;
		}
		cout << endl;
	}
	
	for (int i = k; i <= n; ++i)
	{
		cout << i << " ";
	}
	cout << endl;


	return EXIT_SUCCESS;
}