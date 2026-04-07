#include <iostream>
using namespace std;

struct DetailAlamat {
    string Desa;
    string Kota; 
};
struct orang 
{
    string nama;
    DetailAlamat alamat; 
    int umur;
};
int main()
{
    //Deklarasi obyek dari struct orang 
    orang mhs;
    //isi objek 
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);
    cout << "Alamat desa: ";
    getline(cin, mhs.alamat.Desa);
    cout << "Alamat kota : ";
    getline(cin, mhs.alamat.Kota);
    cout << "Umur : ";
    cin>> mhs.umur;
    cout << endl;
    //menampilkan isi objek 
    cout << "Nama : "<< mhs.nama <<endl;
    cout << "Desa : " << mhs.alamat.Desa << endl;
    cout << "Alamat : " << mhs.alamat.Kota << endl;
    cout << "Umur : " << mhs.umur<<endl;

    
}
