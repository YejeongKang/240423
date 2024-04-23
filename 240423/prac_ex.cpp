#include <iostream>

using namespace std;

int main() {

	int rep;
	int j = 0;
	
	cout << "Input : ";
	cin >> rep;
	cout << endl << "Output : " << endl;
	
	string star = "";

	for (int i = 1; i <= rep; i++) {

		/*
		1)
		while (j != i) {
			cout << "*";
			j++;
		}

		j = 0;
		cout << endl;*/
		
		// 2)
		star += "*";
		cout << star << endl;
	}
	return 0;
}