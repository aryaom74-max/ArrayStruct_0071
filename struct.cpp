#include <iostream>
using namespace std;

struct orang {
    string nama;
    string alamat; 
    int umur;
};

int main()
{
    //Deklarasi obyek dari struct orang 
    orang mhs;
    //isi objek 
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Asal : ";
    cin >> mhs.alamat;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    //menampilkan isi objek 
    cout << "Nama : "<< mhs.nama <<endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur<<endl;
    
}
