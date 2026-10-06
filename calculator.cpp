#include <iostream> 
using namespace std;


int main() {
	double x, y;
	char op;

	cout << "SELAMAT DATANG DI KALKULATOR \n";
	cout << "Masukkan perkalian ex=7 * 7 =  ";
	cin >> x >> op >> y;
	
	switch (op) {
		case '+': cout << "hasilnya "  << x + y << "\n"; break;
		case '-': cout << "hasilnya " <<  x - y << "\n"; break;
		case '*': cout << "hasilnya " << x * y << "\n"; break;
		case '/':
				if (y == 0) cout << "ngapain dibagi 0 dongo";
				else cout << "hasilnya" <<  x / y << "\n";
				break;
		case '=': cout << "ngapain disamadengan bego?" << "\n";
	}
return 0;
}

