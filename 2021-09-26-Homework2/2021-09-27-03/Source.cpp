#include<iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int k = 0; //�� ���������� ������������ ����� �������� k ������
	int m = 0; //������ ������� ����� � ������ ������� ���������� m ����� ����������
	int n = 0; //�-�� ������
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