#include <iostream>
#include <vector>
#include <string>

// Memanggil file header yang sudah dibuat
#include "user.h"
#include "member.h"
#include "admin.h"

using namespace std;

int main() {
    // Membuat objek admin pakai pointer 
    admin* varAdmin = new admin("Makoto Yuki", "admin@umy.ac.id");

    // Membuat daftar member menggunakan vector
    vector<member> daftarMember;
    daftarMember.push_back(member("Fuuka", "Fuuka@gmail.com"));
    daftarMember.push_back(member("Yukari", "Yukari@gmail.com"));

    // 1. Admin menampilkan semua member
    varAdmin->showAllMember(daftarMember);

    // 2. Member pertama pamer profil
    cout << "--- Profil Sebelum Diubah Admin ---" << endl;
    daftarMember[0].showProfile();

    // 3. Admin mengubah status member pertama (Toggle Activation)
    varAdmin->toggleActivationMember(daftarMember[0]);

    // 4. Member pertama cek profil lagi (statusnya pasti berubah)
    cout << "--- Profil Setelah Diubah Admin ---" << endl;
    daftarMember[0].showProfile();

    // Hapus pointer biar nggak leak memori
    delete varAdmin;

    return 0;
}
