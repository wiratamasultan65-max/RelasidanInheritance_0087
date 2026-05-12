#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int main() {
    // Manusia created on the heap
    Manusia* varManusia = new Manusia("jono");

    // Deleting Manusia also triggers Jantung's destructor automatically
    delete varManusia;

    return 0;
}