#include <iostream>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};
struct orang
{
    string nama;
    DetailAlamat alamat;
    int umur;
};
int main()
{
    // deklarasi objek dari struct orang
    orang mhs[3];
    // isi objek
    for (int i = 0; i <= 2; i++)
    {
        cout << "Nama Mahasiswa:";
        getline(cin, mhs[i].nama);
        cout << "Alamat desa:";
        getline(cin, mhs[i].alamat.desa);
        cout << "Alamat Kota:";
        getline(cin, mhs[i].alamat.kota);
        cout << "Umur:";
        cin >> mhs[i].umur;
        cin.ignore();
    }
    cout << endl;
    //
    for (int i = 0; i <= 2; i++)
    {
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Desa : " << mhs[i].alamat.desa << endl;
        cout << "Kota : " << mhs[i].alamat.kota << endl;
        cout << "Umur : " << mhs[i].umur << endl;
    }
}