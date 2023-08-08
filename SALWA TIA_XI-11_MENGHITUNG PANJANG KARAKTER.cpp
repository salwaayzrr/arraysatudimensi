#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	//mendeklarasikan teks1 dan teks2
	char teks1[10], teks2[10];
	int j1hdepan, j1hkel, j1hhuruf;
	
	//menampilkan pesan u/ meminta masukan dari pengguna
	cout << "Masukkan Nama Depan Anda?: ";
	cin >> teks1;
	cout << "Masukkan Nama Keluarga Anda?: ";
	cin >> teks2;
	//menghitung panjang teks
	j1hdepan = strlen(teks2);
	j1hkel = strlen(teks2);
	j1hhuruf = j1hdepan + j1hkel;
	
	//menampilkan hasil ke pengguna
 cout << "Nama Lengkap Anda: " << teks1 << " " << teks2 <<
 endl;
 cout << "Jumlah Huruf Nama Anda : " << j1hhuruf << " Huruf"
 <<endl;
   system ("PAUSE");
   return 0;
}
