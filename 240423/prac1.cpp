#include <iostream>

int main() {

	std::cout << "(1) 5�� ���\n----5��----\n";

	for (int i = 1; i < 10; i++) {
		std::cout << "5 * " << i << " = " << 5 * i  << std::endl;

	}

	std::cout << "(2) 1 ~ 9�� ���\n";

	for (int j = 1; j < 10; j++) {
		std::cout << "----" << j << "��----\n";
		
		for (int k = 1; k < 10; k++) {

		std::cout << j << " * " << k << " = " << j * k << std::endl;

		}

	}
}