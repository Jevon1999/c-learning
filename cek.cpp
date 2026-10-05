#include <iostream>
using namespace std;

int main() {
    double a,b;
    char operation;
    
    cout << "my kalkulator gwejh \n";

    cout << "Masukkan perhitungan (hanya 2 bilangan y) ex 7 * 9 = " ;
    cin >> a >> operation >> b;

    switch (operation) {
        case '+': cout << "hasilnya" << a + b << "\n"; break;
        case '-': cout << "hasilnya" << a - b << "\n"; break;
        case 'x': cout << "hasilnya" << a * b << "\n"; break;
	case '/':
        	if (b == 0) cout << "ngapaini dibagi 0 jir \n";
        	else cout << "hasilnya" << a / b << "\n"; break;
        case '=': cout << "ngapain disama dengan jir, mikrir krids"; break;
    }


return 0;
    
}
