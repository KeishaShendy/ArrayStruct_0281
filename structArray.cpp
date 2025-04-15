#include <iostream>
using namespace std;

struct detailAlamat {
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    detailAlamat alamat;
};

int main() {
    mahasiswa mhs[2];

    // Input data mahasiswa
    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan NIM = ";
        cin >> mhs[i].nim;
        cin.ignore(); // Menghindari masalah getline setelah cin
        cout << "Masukkan nama = ";
        getline(cin, mhs[i].nama);
        cout << "Masukkan alamat desa = ";
        cin >> mhs[i].alamat.desa;
        cout << "Masukkan alamat kota = ";
        cin >> mhs[i].alamat.kota;
        cout << endl;
    }

    // Menampilkan data mahasiswa
    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM   = " << mhs[i].nim << endl;
        cout << "Nama  = " << mhs[i].nama << endl;
        cout << "Desa  = " << mhs[i].alamat.desa << endl;
        cout << "Kota  = " << mhs[i].alamat.kota << endl;
        cout << endl;
    }

 
}