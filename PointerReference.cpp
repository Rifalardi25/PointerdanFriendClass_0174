#include <iostream>
using namespace std;

class Dosen{
    public:
    string nama;
    void tampilNama()
    {
        cout << "Namanya adalah " << nama << endl;
    }
};

class staf{
    public:
    int nidn;
};

int main(){
    Dosen ds;
    ds.nama = "Giga";
    ds.tampilNama();

    Dosen &dsref = ds;
    dsref.nama = "joko";
    cout << "Alamat Memorinya = " << &dsreff << endl;
    dsref.tampilNama();

    Dosen *pds = &ds;
    pds->nama = "Reza";
    cout << "Alamat Memorinya = " << pds << endl;
    pds->tampilNama();

    int a = 5;
}