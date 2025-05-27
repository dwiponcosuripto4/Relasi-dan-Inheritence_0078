#include <iostream>
#include <vector>
using namespace std;

class dokter;

class pasien // Asosiasi
{
public:
    string nama;
    vector<dokter *> daftar_dokter;
};
