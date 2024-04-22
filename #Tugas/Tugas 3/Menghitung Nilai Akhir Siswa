#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama_siswa;
    double nilai_keaktifan, nilai_tugas, nilai_ujian;

    // Input data dari pengguna
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa: ";
    getline(cin, nama_siswa);
    cout << "Nilai Keaktifan: ";
    cin >> nilai_keaktifan;
    cout << "Nilai Tugas: ";
    cin >> nilai_tugas;
    cout << "Nilai Ujian: ";
    cin >> nilai_ujian;

    // Menghitung nilai murni dari masing-masing nilai
    double nilai_murni_keaktifan = nilai_keaktifan * 0.20;
    double nilai_murni_tugas = nilai_tugas * 0.30;
    double nilai_murni_ujian = nilai_ujian * 0.50;

    // Menghitung nilai akhir
    double nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;

    // Menentukan grade
    char grade;
    if (nilai_akhir > 80)
        grade = 'A';
    else if (nilai_akhir > 70)
        grade = 'B';
    else if (nilai_akhir > 56)
        grade = 'C';
    else if (nilai_akhir > 46)
        grade = 'D';
    else
        grade = 'E';

    // Menampilkan output
    cout << "\nSiswa yang bernama " << nama_siswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
    cout << "Nilai Keaktifan * 20%: " << nilai_murni_keaktifan << endl;
    cout << "Nilai Tugas * 30%: " << nilai_murni_tugas << endl;
    cout << "Nilai Ujian * 50%: " << nilai_murni_ujian << endl;
    cout << "Jadi Siswa yang bernama " << nama_siswa << " memperoleh nilai akhir sebesar " << nilai_akhir << " dengan grade " << grade << endl;

    return 0;
}
