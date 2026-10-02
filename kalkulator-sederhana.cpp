#include <iostream>
using namespace std;

int main() {
	double x,y;
	char op;

	cout << R"(
                    _         _ _          _       _                                  _ _     
                   | |       | | |        | |     | |                                (_) |    
  _ __ ___  _   _  | | ____ _| | | ___   _| | __ _| |_ ___  _ __    __ ___      _____ _| |__  
 | '_ ` _ \| | | | | |/ / _` | | |/ / | | | |/ _` | __/ _ \| '__|  / _` \ \ /\ / / _ \ | '_ \
 | | | | | | |_| | |   < (_| | |   <| |_| | | (_| | || (_) | |    | (_| |\ V  V /  __/ | | | |
 |_| |_| |_|\__, | |_|\_\__,_|_|_|\_\\__,_|_|\__,_|\__\___/|_|     \__, | \_/\_/ \___| |_| |_|
             __/ |                                                  __/ |           _/ |      
            |___/                                                  |___/           |__/       )" << "\n";


	cout << "WELCUM GUYS \n";
	cout << " ";
	cout << "Masukkan perhitungan (hanya 2 perhitungan ex= 15 + 5) = ";
	cin >> x >> op >> y;
	
	switch (op) {
		case '+': cout << "hasilnya: " << x + y << "\n"; break;
		case '-': cout << "hasilnya: " << x - y << "\n"; break;
		case '*': cout << "hasilnya: " << x * y << "\n"; break;
		case '/':
			if (y == 0) cout << "tidak bisa dibagi nol (0)\n";
			else cout << "hasilnya" << x / y << "\n";
			break;
		case '=': cout << "ngapain pake = njir, mikrir krids" << "\n"; break;
	}
		return 0;
}
		
