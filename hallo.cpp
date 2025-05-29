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

    return 0;
}
