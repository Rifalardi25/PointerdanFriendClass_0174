#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void showNim()
    {
        cout << "no induk" << nim << endl;
    }
};

int main()
{
    Mahasiswa mhs;
    mhs.nim;
    mhs.showNim();

    Mahasiswa &refMhs = mhs;
    refMhs.nim = 2;
    mhs.showNim();

    Mahasiswa *pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->showNim();
    return 0;
}