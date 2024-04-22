#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama_siswa;
    double nilai_pertandingan1, nilai_pertandingan2, nilai_pertandingan3;

    // Input data dari pengguna
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa: ";
    getline(cin, nama_siswa);
    cout << "Nilai Pertandingan I: ";
    cin >> nilai_pertandingan1;
    cout << "Nilai Pertandingan II: ";
    cin >> nilai_pertandingan2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilai_pertandingan3;

    // Menghitung nilai rata-rata
    double nilai_rata_rata = (nilai_pertandingan1 + nilai_pertandingan2 + nilai_pertandingan3) / 3;

    // Menentukan juara
    string juara;
    if (nilai_rata_rata > 80)
        juara = "I";
    else if (nilai_rata_rata > 75)
        juara = "II";
    else if (nilai_rata_rata > 65)
        juara = "III";
    else
        juara = "Tidak Juara";

    // Menampilkan output
    cout << "\nSiswa yang bernama " << nama_siswa << endl;
    cout << "Memperoleh nilai rata-rata " << nilai_rata_rata << " dan menjadi juara ke-" << juara << " dari hasil perlombaan yang diikutinya." << endl;

    return 0;
}
