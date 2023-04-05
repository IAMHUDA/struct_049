#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string Nama; 
	DetailAlamat Alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs;

	cout << "Masukan Nim = ";
	cin >> mhs.NIM;
	cout << "Masukan Nama = ";
	cin >> mhs.Nama;
	cout << "Alamat = " << endl;
	cout << "\n\tmasukkan desa = ";
	cin >> mhs.Alamat.desa;
	cout << "\tmasukkan kota = ";
	cin >> mhs.Alamat.kota;
	cout << "Masukan umur = ";
	cin >> mhs.umur;

	cout << "\nNIm = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nalamat desa = " << mhs.Alamat.desa;
	cout << "\nalamat kota = " << mhs.Alamat.kota;
	cout << "\numur = " << mhs.umur;


}