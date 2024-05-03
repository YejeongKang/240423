#include <iostream>

using namespace std;

int main() {
	//1부터 100 사이의 임의의 숫자 생성
	int x = 10;
	int rnum;

	rnum == 0 ? rnum = rand() % 100 : cout//??????여기부터 해보슝;

	do {
		cout << "입력 : ";
		cin >> x;
		rnum = rand() % 100;
		cout << rnum << endl;

	} while (rnum != 0 && x != 0);
	
		
	}
