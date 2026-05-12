#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
#include <string>
#include "jantung.h" // Mengimpor class Jantung

using namespace std;

// membuat class manusia di file header manusia.h
class Manusia {
public:
    // membuat member variabel class manusia
    string name;
    Jantung varJantung; // Jantung adalah bagian tetap dari Manusia

    // membuat constructor dan destructor class manusia
    Manusia(string pName) : name(pName) {
        cout << name << " Hidup\n";
    }

    ~Manusia() {
        cout << name << " Mati\n";
    }
};

#endif // !MANUSIA_H