#include <iostream>
using namespace std;

void prototypeFunction ();
double angka1, angka2;

int main ()
{
	prototypeFunction ();
}

void prototypeFunction ()
{
	cout << "Masukkan angka pertama " << endl;
	cin >> angka1;
	cout << endl;
	cout << "Masukkan angka kedua " <<endl;
	cin >> angka2;
	cout<< endl;
	cout << "Hasil perkalian = "<< (angka1 * angka2) << endl;
	cout << "Hasil pembagian = "<< (angka1 / angka2) << endl;
	cout << "Hasil penjumlahan = "<< (angka1 + angka2) << endl;
	cout << "Hasil pengurangan = "<< (angka1 - angka2) << endl;
}


