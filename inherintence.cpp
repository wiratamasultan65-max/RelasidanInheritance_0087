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