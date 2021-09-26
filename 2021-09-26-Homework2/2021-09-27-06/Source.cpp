#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char* argv[]) 
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;

	cout << "Enter data:" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "Exit data:" << endl;
	
	if (abs(x1 - x2) == abs(y1 - y2)) 
	{
		cout << "YES" << endl;
	}
	else if (x1 == x2 || y1 == y2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return EXIT_SUCCESS;
}