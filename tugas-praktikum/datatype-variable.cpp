#include <iostream>
using namespace std;

int main(){
	string nama;
	int umur;
	char jenisKelamin;

	cout << "Lau siape MPRUY?";
	cout << "jawab: \n";
	getline(cin,nama);

	cout << "umur berapa bang?";
	cout << "jawab: ";
	cin >> umur;

	cout << "jenis kelamin [L/P]";
	cin >> jenisKelamin;


cout << "salam kenal, nama anda adalah = " << nama << " umur anda = " << umur << " jenis kelamin anda = " << jenisKelamin;

}
