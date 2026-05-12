#include <iostream>
#include <string>
using namespace std;

// deklarasi class mahasiswa
class Mahasiswa {
private:
    const int id;
    string nama;
    float nilai;

public:
    // membuat member initialization list dari class mahasiswa
    Mahasiswa(int pId, string pNama, float pNilai) : nama(pNama), nilai(pNilai), id(pId) {
        // id didefinisikan di list karena merupakan variable 'const'
    };

    // membuat destructor dari class mahasiswa
    ~Mahasiswa() {
        cout << "ID    : " << id << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    };
};

int main() {
    // deklarasi dan pemberian nilai untuk objek mhs
    Mahasiswa mhs(12, "Asroni", 90.5);

    return 0;
}