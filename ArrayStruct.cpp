#include <iostream>
#include <string> // Penting untuk tipe data string

using namespace std;

// 1. Definisi Struct (Letakkan di luar main)
struct DetailAlamat {
    string desa;
    string ko;
};

struct Orang {
    string nama;
    DetailAlamat alamat; // Nested Struct
    int umur;
};

int main() {
    // --- BAGIAN 1: ARRAY DASAR ---
    cout << "=== SESI 1: ARRAY DASAR ===" << endl;
    int dataku[5] = {10, 20, 30, 40, 50};
    cout << "Data ke-3 (index 2): " << dataku[2] << endl;
    
    dataku[2] = 600; // Mengubah nilai
    cout << "Data ke-3 baru: " << dataku[2] << endl << endl;

    // --- BAGIAN 2: STRUCT TUNGGAL (NESTED) ---
    cout << "=== SESI 2: STRUCT MAHASISWA TUNGGAL ===" << endl;
    Orang mhsTunggal;
    
    cout << "Input Nama Mahasiswa: ";
    // Pakai getline agar bisa baca nama lengkap dengan spasi
    getline(cin, mhsTunggal.nama); 
    
    cout << "Input Desa: ";
    getline(cin, mhsTunggal.alamat.desa);
    
    cout << "Input Kota: ";
    getline(cin, mhsTunggal.alamat.kota);
    
    cout << "Input Umur: ";
    cin >> mhsTunggal.umur;
    cin.ignore(); // Membersihkan sisa 'Enter' agar tidak mengganggu input berikutnya

    cout << "\nOutput Data Tunggal:" << endl;
    cout << "Nama: " << mhsTunggal.nama << " | Alamat: " << mhsTunggal.alamat.desa << ", " << mhsTunggal.alamat.kota << " | Umur: " << mhsTunggal.umur << endl << endl;

    // --- BAGIAN 3: ARRAY OF STRUCTS (BANYAK MAHASISWA) ---
    cout << "=== SESI 3: ARRAY OF STRUCTS (3 DATA) ===" << endl;
    Orang daftarMhs[3];

    for (int i = 0; i < 3; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "  Nama  : ";
        getline(cin, daftarMhs[i].nama);
        cout << "  Desa  : ";
        getline(cin, daftarMhs[i].alamat.desa);
        cout << "  Kota  : ";
        getline(cin, daftarMhs[i].alamat.kota);
        cout << "  Umur  : ";
        cin >> daftarMhs[i].umur;
        cin.ignore(); // Membersihkan buffer 'Enter'
        cout << "-----------------------" << endl;
    }

    // Menampilkan hasil perulangan
    cout << "\n=== HASIL AKHIR DAFTAR MAHASISWA ===" << endl;
