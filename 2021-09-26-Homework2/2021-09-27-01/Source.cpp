#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int k1 = 0;
	int k2 = 0;

	setlocale(LC_ALL, "Russian");

	cout << "Enter data:" << endl;
	cin >> a;
	cout << "Exit data:" << endl;

	if (a == 0) {
		cout << "�� ������ ������";
	}
	else
	{
		k1 = a / 100;
		if (k1 == 9) {
			cout << "��������� ";
		}
		else if (k1 == 8) {
			cout << "���������";
		}
		else if (k1 == 7) {
			cout << "������� ";
		}
		else if (k1 == 6) {
			cout << "�������� ";
		}
		else if (k1 == 5) {
			cout << "������� ";
		}
		else if (k1 == 4) {
			cout << "��������� ";
		}
		else if (k1 == 3) {
			cout << "������ ";
		}
		else if (k1 == 2) {
			cout << "������ ";
		}
		else if (k1 == 1) {
			cout << "��� ";
		}

		k1 = a % 100;

		if (k1 == 19) {
			cout << "������������ ";
			k2 = 1;
		}
		else  if (k1 == 18) {
			cout << "������������ ";
			k2 = 1;
		}
		else  if (k1 == 17) {
			cout << "���������� ";
			k2 = 1;
		}
		else  if (k1 == 16) {
			cout << "����������� ";
			k2 = 1;
		}
		else  if (k1 == 15) {
			cout << "���������� ";
			k2 = 1;
		}
		else  if (k1 == 14) {
			cout << "������������ ";
			k2 = 1;
		}
		else  if (k1 == 13) {
			cout << "���������� ";
			k2 = 1;
		}
		else  if (k1 == 12) {
			cout << "���������� ";
			k2 = 1;
		}
		else  if (k1 == 11) {
			cout << "���������� ";
			k2 = 1;
		}
		else if (k1 == 10) {
			cout << "������ ";
			k2 = 1;
		}
		else if (k1 / 10 == 9) {
			cout << "��������� ";
		}
		else if (k1 / 10 == 8) {
			cout << "����������� ";
		}
		else if (k1 / 10 == 7) {
			cout << "�������� ";
		}
		else if (k1 / 10 == 6) {
			cout << "���������� ";
		}
		else if (k1 / 10 == 5) {
			cout << "��������� ";
		}
		else if (k1 / 10 == 4) {
			cout << "����� ";
		}
		else if (k1 / 10 == 3) {
			cout << "�������� ";
		}
		else if (k1 / 10 == 2) {
			cout << "�������� ";
		}

		if (k2 == 1) {
			cout << "�������" << endl;
		}
		else if (k1 % 10 == 9) {
			cout << "������ �������";
		}
		else if (k1 % 10 == 8) {
			cout << "������ �������";
		}
		else if (k1 % 10 == 7) {
			cout << "���� �������";
		}
		else if (k1 % 10 == 6) {
			cout << "����� �������";
		}
		else if (k1 % 10 == 5) {
			cout << "���� �������";
		}
		else if (k1 % 10 == 4) {
			cout << "������ ������";
		}
		else if (k1 % 10 == 3) {
			cout << "��� ������";
		}
		else if (k1 % 10 == 2) {
			cout << "��� ������";
		}
		else if (k1 % 10 == 1) {
			cout << "���� �����";
		}
		else if (k1 % 10 == 0) {
			cout << "�������";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}