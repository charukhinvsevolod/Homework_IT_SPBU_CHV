#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Enter data:" << endl;
	cin >> a >> b >> c;
	cout << "Exit data:" << endl;

	if (a + b <= c || a + c <= b || c + b <= a)
	{
		cout << "impossible" << endl;
	}
	else if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
	{
		cout << "right" << endl;
	}
	else if (a * a + b * b > c * c && a * a + c * c > b * b && c * c + b * b > a * a)
	{
		cout << "acute" << endl;
	}
	else if (a * a + b * b << c * c || a * a + c * c << b * b || c * c + b * b << a * a)
	{
		cout << "obtuse" << endl;
	}


	return EXIT_SUCCESS;
}