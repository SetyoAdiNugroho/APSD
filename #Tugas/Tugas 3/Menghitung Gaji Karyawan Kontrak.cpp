#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama_karyawan, pendidikan;
    int golongan_jabatan, jumlah_jam_kerja;

    // Input data dari pengguna
    cout << "PROGRAM HITUNG GAJI KARYAWAN KONTRAK" << endl;
    cout << "Nama Karyawan: ";
    getline(cin, nama_karyawan);
    cout << "Golongan Jabatan (1/2/3): ";
    cin >> golongan_jabatan;
    cout << "Pendidikan (SMA/D1/D3/S1): ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja: ";
    cin >> jumlah_jam_kerja;

    // Gaji pokok
    double gaji_pokok = 300000;

    // Tunjangan Jabatan
    double tunjangan_jabatan;
    switch(golongan_jabatan) {
        case 1:
            tunjangan_jabatan = 0.05 * gaji_pokok;
            break;
        case 2:
            tunjangan_jabatan = 0.10 * gaji_pokok;
            break;
        case 3:
            tunjangan_jabatan = 0.15 * gaji_pokok;
            break;
        default:
            tunjangan_jabatan = 0;
            break;
    }

    // Tunjangan Pendidikan
    double tunjangan_pendidikan;
    if (pendidikan == "SMA")
        tunjangan_pendidikan = 0.025 * gaji_pokok;
    else if (pendidikan == "D1")
        tunjangan_pendidikan = 0.05 * gaji_pokok;
    else if (pendidikan == "D3")
        tunjangan_pendidikan = 0.20 * gaji_pokok;
    else if (pendidikan == "S1")
        tunjangan_pendidikan = 0.30 * gaji_pokok;
    else
        tunjangan_pendidikan = 0;

    // Honor Lembur
    double honor_lembur = 0;
    if (jumlah_jam_kerja > 8) {
        int jam_lembur = jumlah_jam_kerja - 8;
        honor_lembur = jam_lembur * 3500;
    }

    // Total gaji
    double total_gaji = gaji_pokok + tunjangan_jabatan + tunjangan_pendidikan + honor_lembur;

    // Menampilkan output
    cout << "\nKaryawan yang bernama " << nama_karyawan << endl;
    cout << "Honor yang diterima:" << endl;
    cout << "Tunjangan Jabatan: Rp " << tunjangan_jabatan << endl;
    cout << "Tunjangan Pendidikan: Rp " << tunjangan_pendidikan << endl;
    cout << "Honor Lembur: Rp " << honor_lembur << endl;
    cout << "+\nTotal Gaji: Rp " << total_gaji << endl;

    return 0;
}
