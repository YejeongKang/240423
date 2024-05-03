#include <iostream>
using namespace std;

int main() {

	int num = 10000;
	int sum = 0;

	cout << "사용자가 입력한 숫자 더하기\n";
	
	while (num != 0) {

		cout << "\n숫자를 입력하세요 (0 : exit) : ";
		cin >> num;

		sum += num;

	}
	cout << "\n사용자가 입력한 수의 합은 : " << sum << endl;

	return 0;
}