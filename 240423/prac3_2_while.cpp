#include <iostream>

int main() {

	int num;
	int sum = 0;
	int i = 1;

	std::cout << "1���� n������ �� ���ϱ�\n";
	std::cout << "\n���� (���� ����)�� �Է��ϼ��� : ";
	std::cin >> num;

	while (i <= num) {
		sum += i;
		i++;
	}

	std::cout << "1���� " << num << "������ ���� : " << sum;

	return 0;
}