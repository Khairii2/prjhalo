#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string nama[5];  //inisialisasi array string untuk menampung 5 nama
                 
    //memasukkan data 5 buah nama ke dalam array string
    cout << "Silahkan Masukkan 5 Nama:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << "Nama ke-" << i + 1 << ": ";
        getline(cin, nama[i]);
    }
    
    //menampilkan data pada array
    cout << "\n======== DAFTAR NAMA ========\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << i + 1 << ". " << nama[i] << " " << endl;
    }

   cout << "\nMantap! Total ada " << 5 << " nama yang berhasil disimpan.\n";
   cout << "Terima kasih sudah memasukkan data\n";

   return 0;
}
