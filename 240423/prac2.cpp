#include <iostream>

int main() {
	int num;
	int sum = 0; 

	std::cout << "1���� n������ �� ���ϱ�\n";
	std::cout << "\n���� (���� ����)�� �Է��ϼ��� : ";
	std::cin >> num;

	for (int i = 1; i < num + 1; i++) {
		sum += i;
	} 

	std::cout << "1���� " << num << "������ ���� : " << sum;




}