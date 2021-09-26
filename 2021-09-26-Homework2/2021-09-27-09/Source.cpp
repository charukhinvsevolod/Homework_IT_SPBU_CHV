#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;

	cout << "Enter data:" << endl;
	cin >> m >> n >> x >> y;
	cout << "Exit data:" << endl;

	if (x <= m - 1)
	{
		cout << x + 1 << " " << y << endl;
	}
	if (x >= 2)
	{
		cout << x - 1 << " " << y << endl;
	}
	if (y <= n - 1)
	{
		cout << x << " " << y + 1 << endl;
	}
	if (y >= 2)
	{
		cout << x << " " << y - 1 << endl;
	}


	return EXIT_SUCCESS;
}