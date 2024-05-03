#include <iostream>

using namespace std;

// 1)
int main() {

	int rep;
	int j = 0;
	
	cout << "Input : ";
	cin >> rep;
	cout << endl << "Output : " << endl;
	
	string star = "";

	for (int i = 1; i <= rep; i++) {
		star += "*";
		cout << star << endl;
	}
	return 0;
}

// 2)
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