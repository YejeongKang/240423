#include <iostream>

using namespace std;

int main() {

	int rep;
	int j = 0;
	cout << "Input : ";
	cin >> rep;
	cout << endl << "Output : " << endl;

	for (int i = 1; i <= rep; i++) {

		while (j != i) {
			cout << "*";
			j++;
		}

		j = 0;
		cout << endl;
	}
	return 0;
}