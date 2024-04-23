#include <iostream>

int main() {

	std::cout << "(1)\n----5´Ü----\n";

	for (int i = 0; i < 9; i++) {
		std::cout << "5 * " << i + 1 << " = " << 5 * (i + 1) << std::endl;

	}

	std::cout << "(2)\n";

	for (int j = 0; j < 9; j++) {
		std::cout << "----" << j + 1 << "´Ü----\n";
		
		for (int k = 0; k < 9; k++) {

		std::cout << j + 1 << " * " << k + 1 << " = " << (j + 1) * (k + 1) << std::endl;

		}

	}
}