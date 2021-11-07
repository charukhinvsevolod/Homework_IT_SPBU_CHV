#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	unsigned int x = 0;
	unsigned int x_n = 0;
	unsigned int x_m = 0;
	unsigned int n = 0;
	unsigned int m = 0;

	cin >> x >> n >> m;
	
	x_m = x_n = x;
	x_n = x >> n - 1;
	x_m = x >> m - 1;
	x_n = x_n & 1;
	x_m = x_m & 1;
	x_n = x_n << n - 1;
	x_m = x_m << m - 1;
	x = x ^ x_n;
	x = x ^ x_m;
	x_n = x_n >> n - 1;
	x_m = x_m >> m - 1;
	x_n = x_n << m - 1;
	x_m = x_m << n - 1;
	x = x | x_n;
	x = x | x_m;

	cout << x << endl;

	return EXIT_SUCCESS;
}