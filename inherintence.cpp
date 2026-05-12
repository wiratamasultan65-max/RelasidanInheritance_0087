#include <iostream>
#include <string>
using namespace std;

// pembuatan class orang sebagai base class (parent)
class orang {
public:
    // deklarasi member variabel dari class orang
    string nama;

    // pembuatan constructor dan destructor dari class orang
    orang(string pNama) : nama(pNama) {
        cout << "Orang dibuat\n" << endl;
    }
     ~orang() {
        cout << "Orang dihapus\n" << endl;
    }

    // pembuatan function jumlah
    int jumlah(int a, int b) {
        return a + b;
    }
};

// pembuatan class pelajar sebagai pewaris (child) dari class orang
class pelajar : public orang {
public:
    // deklarasi member variabel dari class pelajar
    string sekolah;

    // pembuatan constructor dan destructor dari class pelajar
    // constructor memanggil constructor parent (orang)
    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dibuat\n" << endl;
    }

     ~pelajar() {
        cout << "Pelajar dihapus\n" << endl;
    }

    // pembuatan function perkenalan()
    string perkenalan() {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
    }
};

int main() 
{
    // deklarasi dan pemberian nilai untuk variabel object siswa1
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");

    // pemanggilan function perkenalan dari class pelajar
    cout << siswa1.perkenalan();

    // pemanggilan function warisan dari class orang kepada class object pelajar
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

    return 0;
}