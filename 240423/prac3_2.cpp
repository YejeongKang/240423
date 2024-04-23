#include <iostream>

int main() {

	int num;
	int sum = 0;
	int i = 1;

	std::cout << "1부터 n까지의 합 구하기\n";
	std::cout << "\n숫자 (양의 정수)를 입력하세요 : ";
	std::cin >> num;

	while (i <= num) {
		sum += i;
		i++;
	}

	std::cout << "1부터 " << num << "까지의 합은 : " << sum;

	return 0;
}