#include <iostream>

using namespace std;

int main() {
	//1���� 100 ������ ������ ���� ����
	int x = 10;
	int rnum;

	rnum == 0 ? rnum = rand() % 100 : cout//??????������� �غ���;

	do {
		cout << "�Է� : ";
		cin >> x;
		rnum = rand() % 100;
		cout << rnum << endl;

	} while (rnum != 0 && x != 0);
	
		
	}
