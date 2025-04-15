#include <iostream>
using namespace std;

// deklarasi array tanpa ukuran, wajib langsung diisi data
int nilai[] = {1, 2, 3};

// deklarasi array dengan ukuran, dan diberi nilai awal
int skor[4] = {9, 13, 28, 11};

// deklarasi array dengan ukuran, tanpa nilai awal
string nama[3] = {"Ali", "Budi", "Citra"}; // beri nilai agar output tidak kosong

int main(){
    cout << "Isi data skor yang ketiga = " << skor[2] << endl;

    // mengisi array pada index tertentu secara langsung
    skor[2] = 50;
    cout << "Isi data skor yang ketiga setelah diubah = " << skor[2] << endl;

    // menampilkan array nama menggunakan looping
    for(int i = 0; i < 3; i++){
        cout << "Mahasiswa ke-" << i+1 << " = " << nama[i] << endl;
    }

    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << "Data ke-" << i+1 << " = " << nama[i] << endl;
    }

    return 0;
}
