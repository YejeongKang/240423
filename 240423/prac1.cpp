#include <iostream>

int main() {

	std::cout << "(1) 5단 출력\n----5단----\n";

	for (int i = 1; i < 10; i++) {
		std::cout << "5 * " << i << " = " << 5 * i  << std::endl;

	}

	std::cout << "(2) 1 ~ 9단 출력\n";

	for (int j = 1; j < 10; j++) {
		std::cout << "----" << j << "단----\n";
		
		for (int k = 1; k < 10; k++) {

		std::cout << j << " * " << k << " = " << j * k << std::endl;

		}

	}
}