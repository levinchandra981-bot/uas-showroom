#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main(){
    string kode, nama;

    cout << "Kode Mobil: ";
    cin >> kode;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    

    cout  << "Nama Pemilih: ";
    getline(cin, nama);

    cout << "\nVote berhasil\n";
    cout << "Mobil: "<< kode << "\nPemilih " << nama << endl;
}
 

