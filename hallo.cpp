#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //modifikasi kode program agar menerima masukan jumlah nama yang akan di proses 
    int jumlahNama;
    string nama[100]; 

    cout << "Masukkan Jumlah Nama: ";
    cin >> jumlahNama;
    cin.ignore(); 

    cout << endl;

    cout << "Silahkan Masukkan Nama:\n";
    for (int i = 0; i < jumlahNama; i++) 
    {
        cout << "Nama ke-" << i + 1 << ": ";
        getline(cin, nama[i]);
    }

    cout << "\n========================================\n";
    cout << "           DAFTAR NAMA PESERTA        \n";
    cout << "========================================\n";
    for (int i = 0; i < jumlahNama; i++) 
    {
        cout << i + 1 << ". " << nama[i] << endl;
    }
    
    cout << "----------------------------------------\n";
    cout << "      Total Nama yang Dimasukkan: " << jumlahNama << endl;
    cout << "             Terima kasih!\n";
    cout << "----------------------------------------\n";

    return 0;
}
