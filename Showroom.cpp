#include <bits/stdc++.h>
using namespace std;

struct M{ string k,m,o; int t; long long h; bool a=1;};

int main (){
    vector<M> d; int p;
    while (true){
        cout << "\n=== SHOWROOM MOBIL ===\n"
             << "1. Tambah\n2. Tampilkan\n3. Jual\n4. Keluar\nPilih: ";
        cin >> p;
        if (p==0) break;

        if(p==1){
         M x;
         cout << "Kode  : "; cin >> x.k;
         cout << "Merk  : "; cin >> x.m;
         cout << "Model : "; cin >> x.o;
         cout << "Tahun : "; cin >> x.t;
         cout << "Harga : "; cin >> x.h;
         d.push_back(x);
        }

        else if(p==2){
            cout << "\nKode Merk Model Tahun Harga\n";
            cout << "-----------------------------\n";
            for(auto &x:d){
                cout <<  x.k<<" "<<x.m<<" "<<x.o<<" "
                     <<  x.t<<" "<<x.h<<" "
                     <<  (x.a?"Ada":"Jual")<< "\n";
            }
        }
    
            else if (p==3){
                string k; cout << "Kode Mobil: " ;cin >> k;
                for(auto &x:d) if(x.k==k) x.a=0;
            }
        }
        return 0;
    }
    