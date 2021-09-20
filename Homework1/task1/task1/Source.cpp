#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;

	cout << "Enter data:" << endl;
	cin >> a;
	cout << "Exit data" << endl;
	cout << "The next number for the number " << a << " is " << a + 1 << endl;
	cout << "The previous number for the number " << a << " is " << a - 1 << endl;

	return EXIT_SUCCESS;
}