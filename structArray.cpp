#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
};

int main(){
    mahasiswa mhs[2];

    for (int i = 0; i < 2; i++){
        cout << "Mahasiswa ke -" << i+1 << endl;
        cout << "Masukkan NIM = ";
        cin >> mhs[1].nim;
        cin.ignore();
        cout << "Masukkan nama = ";
        getline(cin , mhs[1],nama);
        cout << "masukkan alamat desa = ";
        cin >> mhs[1].alamat.desa;
        cout << "Masukkan alamat kota = ";
        cin >> mhs[1].alamat.kota

    }