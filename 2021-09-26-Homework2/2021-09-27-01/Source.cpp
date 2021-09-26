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
		cout << "ни одного банана";
	}
	else
	{
		k1 = a / 100;
		if (k1 == 9) {
			cout << "дев€тьсот ";
		}
		else if (k1 == 8) {
			cout << "восемьсот";
		}
		else if (k1 == 7) {
			cout << "семьсот ";
		}
		else if (k1 == 6) {
			cout << "шестьсот ";
		}
		else if (k1 == 5) {
			cout << "п€тьсот ";
		}
		else if (k1 == 4) {
			cout << "четыреста ";
		}
		else if (k1 == 3) {
			cout << "триста ";
		}
		else if (k1 == 2) {
			cout << "двести ";
		}
		else if (k1 == 1) {
			cout << "сто ";
		}

		k1 = a % 100;

		if (k1 == 19) {
			cout << "дев€тнадцать ";
			k2 = 1;
		}
		else  if (k1 == 18) {
			cout << "восемнадцать ";
			k2 = 1;
		}
		else  if (k1 == 17) {
			cout << "семнадцать ";
			k2 = 1;
		}
		else  if (k1 == 16) {
			cout << "шестнадцать ";
			k2 = 1;
		}
		else  if (k1 == 15) {
			cout << "п€тнадцать ";
			k2 = 1;
		}
		else  if (k1 == 14) {
			cout << "четырнадцать ";
			k2 = 1;
		}
		else  if (k1 == 13) {
			cout << "тринадцать ";
			k2 = 1;
		}
		else  if (k1 == 12) {
			cout << "двенадцать ";
			k2 = 1;
		}
		else  if (k1 == 11) {
			cout << "одинадцать ";
			k2 = 1;
		}
		else if (k1 == 10) {
			cout << "дес€ть ";
			k2 = 1;
		}
		else if (k1 / 10 == 9) {
			cout << "дев€носто ";
		}
		else if (k1 / 10 == 8) {
			cout << "восемьдес€т ";
		}
		else if (k1 / 10 == 7) {
			cout << "семдес€т ";
		}
		else if (k1 / 10 == 6) {
			cout << "шестьдес€т ";
		}
		else if (k1 / 10 == 5) {
			cout << "п€тьдес€т ";
		}
		else if (k1 / 10 == 4) {
			cout << "сорок ";
		}
		else if (k1 / 10 == 3) {
			cout << "тридцать ";
		}
		else if (k1 / 10 == 2) {
			cout << "двадцать ";
		}

		if (k2 == 1) {
			cout << "бананов" << endl;
		}
		else if (k1 % 10 == 9) {
			cout << "дев€ть бананов";
		}
		else if (k1 % 10 == 8) {
			cout << "восемь бананов";
		}
		else if (k1 % 10 == 7) {
			cout << "семь бананов";
		}
		else if (k1 % 10 == 6) {
			cout << "шесть бананов";
		}
		else if (k1 % 10 == 5) {
			cout << "п€ть бананов";
		}
		else if (k1 % 10 == 4) {
			cout << "четыре банана";
		}
		else if (k1 % 10 == 3) {
			cout << "три банана";
		}
		else if (k1 % 10 == 2) {
			cout << "два банана";
		}
		else if (k1 % 10 == 1) {
			cout << "один банан";
		}
		else if (k1 % 10 == 0) {
			cout << "бананов";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}