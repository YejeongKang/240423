#include <iostream>

int main() {

	int i = 1;
	int j = 1;
	int k = 1;
	
	std::cout << "(1) 5�� ���\n----5��----\n";

	while (i <= 9) {
		std::cout << "5 * " << i << " = " << 5 * i << std::endl;
		i++;
	}

	std::cout << "(2) 1 ~ 9�� ���\n";
	
	while (j <= 9) {
		std::cout << "----" << j << "��----\n"; 

		while (k <= 9) {
			std::cout << j << " * " << k << " = " << j * k << std::endl;
			k++;
		}
		j++;
		k = 1;

	}
	return 0;
	}