#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class anak;

// membuat class ibu pada file header ibu.h
class Ibu {
public:
    // deklarasi member variabel pada class ibu
    string nama;
    vector<anak*> daftar_anak;