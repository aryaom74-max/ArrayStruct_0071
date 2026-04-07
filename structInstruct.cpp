#include <iostream>
using namespace std;

// Struct untuk detail alamat
struct DetailAlamat {
    string desa;
    string kota; 
};

// Struct untuk data mahasiswa (menyatukan semua variabel)
struct Mahasiswa {
    string nama;
    DetailAlamat alamat; // Nested struct
    int umur;
};

int main() {
    // Deklarasi objek 'mhs' dari struct Mahasiswa
    Mahasiswa mhs;

    // Mengisi objek
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama); // Menggunakan getline agar bisa input spasi

    cout << "Alamat desa    : ";
    cin >> mhs.alamat.desa;

    cout << "Alamat kota    : ";
    cin >> mhs.alamat.kota;

    cout << "Umur           : ";
    cin >> mhs.umur;

    cout << "\n--- Data Mahasiswa ---" << endl;
    
    // Menampilkan isi objek 
    cout << "Nama   : " << mhs.nama << endl;
    cout << "Desa   : " << mhs.alamat.desa << endl;
    cout << "Kota   : " << mhs.alamat.kota << endl;
    cout << "Umur   : " << mhs.umur << " tahun" << endl;

    return 0;
}