#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	int n = 0;
	int k = 0;

	cout << "Enter data:" << endl;
	cin >> n;
	cout << "Exit data:" << endl;
	
	/* ���� n >= 0, �� (n / 2) * 2 = n (���� ������) ���� n - 1 (���� ��������)
	���� n < 0, �� (n / 2) * 2 = n (���� ������) ���� n + 1 (���� ��������)
	���� n >= 0, �� ������� ����� (n / 2) * 2 + 2
	���� ����� n < 0 �� ������� ����� ((n - 1) / 2) * 2 + 2
	*/
	cout << ((n / 2) * 2 + 2) *  (((2 * n + 1) % 2) + 1) / 2 +
		(((n - 1) / 2) * 2 + 2) * (-1) * (((2 * n + 1) % 2) - 1) / 2 << endl;

	return EXIT_SUCCESS;
}