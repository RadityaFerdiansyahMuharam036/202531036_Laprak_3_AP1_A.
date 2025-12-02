#include <iostream>
using namespace std;

int main() {
	int kecepatan;
	
	cout << "Masukkan kecepatan drone (km/h: ";
	cin >> kecepatan;
	
	if (kecepatan < 40) {
		cout << "Basic" << endl;
	}
	else if (kecepatan >= 40 && kecepatan <= 79) {
		cout << "Intermediate" << endl;
	}
	else if (kecepatan >= 80 && kecepatan <= 119) {
		cout << "Advanced" << endl;
	}
	else {
		cout << "Ultra" << endl;
	}
	
	return 0;
	}

