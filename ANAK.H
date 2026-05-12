#ifndef ANAK_H
#define ANAK_H

#include <iostream>
#include <string>
using namespace std;

// Membuat class anak di file header anak.h
class anak {
public:
  // Deklarasi member variabel pada class anak
    string nama;

    // Membuat constructor pada class anak
    anak(string pNama) : nama(pNama) {
        cout << "Anak \"" << nama << "\" ada \n";
    }
    // Membuat destructor pada class anak
    ~anak() {
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};

#endif