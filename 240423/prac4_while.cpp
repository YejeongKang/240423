#include <iostream>
using namespace std;

int main() {

	int num = 10000;
	int sum = 0;

	cout << "����ڰ� �Է��� ���� ���ϱ�\n";
	
	while (num != 0) {

		cout << "\n���ڸ� �Է��ϼ��� (0 : exit) : ";
		cin >> num;

		sum += num;

	}
	cout << "\n����ڰ� �Է��� ���� ���� : " << sum << endl;

	return 0;
}