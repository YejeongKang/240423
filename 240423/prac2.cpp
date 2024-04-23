#include <iostream>

int main() {
	int num;
	int sum = 0; 

	std::cout << "1부터 n까지의 합 구하기\n";
	std::cout << "\n숫자 (양의 정수)를 입력하세요 : ";
	std::cin >> num;

	for (int i = 1; i < num + 1; i++) {
		sum += i;
	} 

	std::cout << "1부터 " << num << "까지의 합은 : " << sum;




}