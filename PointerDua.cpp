#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void showNim()
    {
        cout << "no induk = " << nim << endl;
    }
};

int main(){
    Mahasiswa *mhs = new Mahasiswa{1};
    
}