#include <iostream>
using namespace std;

int main(){
  //Deklarasi Array dengan insialisasi
  int dataku[5] = {10,20,30,40,50};
  //Deklarasi tanpa insialisasi 
  int datamu[5];
  int x;
  //cara membaca array dataku
  cout << "Data ke - 3 : " << dataku[2] << endl;

  //ooperasi Matematika 
  x = dataku [2]*3;
  //cara menulis dan mengisi array 
   dataku[2] = 600;
   cout << "Data ke - 3 yang baru : " << dataku[2]<<endl;
   
   // mengisi array datamu satu per satu 
   cout << "Data Index ke - 0 : ";
   cin >> datamu[0];
   cout << "Data index ke - 1 : ";
   cin >> datamu[1];
   cout << "Data Index ke - 2 : ";
   cin >> datamu[2];
   cout << "Data Index ke - 3 : ";
   cin >> datamu[3];
   cout << "Data Index ke - 4 : ";
   cin >> datamu[4];

   // menampilkan data array datamu satu per satu
   cout << "Data ke - 1 : "<< datamu[0] << endl;
   cout << "Data ke - 2 : "<< datamu[1] << endl;
   cout << "Data ke - 3 : "<< datamu[2] << endl;
   cout << "Data ke - 4 : "<< datamu[3] << endl;
   cout << "Data ke - 5 : "<< datamu[4] << endl;

   cout << endl;

   // isi data dengabn pengulangan for 
   for (int i = 0; i <= 4; i++)
   {
       cout << "Data Index ke - "<< i <<" : " ;
       cin >> datamu [i];
   }
   cout << endl;
   //menampilkan datamu dengan perulangan for
    for (int i = 0; i <= 4; i++)
    {
         cout << "Data Index ke - "<< i+1 <<" : " << datamu[i] << endl;
    }

}