#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	int v = 0;
	int t = 0;
	int s = 109;

	cout << "Enter data:" << endl;
	cin >> v >> t;
	cout << "Exit data:" << endl;

	/* ���� v >= 0: ������� ����� = v * t % s
	v < 0:
	-s < v * t % s <= 0
	������� ����� = s + v * t % s, ���� v * t �� ������ s, ���� ������, �� v * t % s = 0
		������������� ��������� "% s", ����� ������ ���� ������
	*/
	cout << (v * t % s) * ((2 * v + 1) % 2 + 1) / 2
		 + ((s + v * t % s) % s) * (-1) * ((2 * v + 1) % 2 - 1) / 2 << endl;

	return EXIT_SUCCESS;
}