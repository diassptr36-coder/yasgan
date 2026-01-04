#include <iostream>
using namespace std;

int main() {
    int jumlah, pilih;
    string nama[50];
    float nilai[50];
    char grade[50];

    cout << "=====================================\n";
    cout << "   SISTEM PENILAIAN MAHASISWA\n";
    cout << "=====================================\n";
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlah;
    cout << endl;

    // ================= INPUT DATA =================
    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        cin >> nama[i];
        cout << "Nilai : ";
        cin >> nilai[i];

        if (nilai[i] >= 85)
            grade[i] = 'A';
        else if (nilai[i] >= 75)
            grade[i] = 'B';
        else if (nilai[i] >= 65)
            grade[i] = 'C';
        else if (nilai[i] >= 50)
            grade[i] = 'D';
        else
            grade[i] = 'E';

        cout << endl;
    }

    // ================= OUTPUT SEMUA MAHASISWA =================
    cout << "=====================================\n";
    cout << "DATA SEMUA MAHASISWA\n";
    cout << "=====================================\n";
    cout << "No\tNama\tNilai\tGrade\tStatus\n";

    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << "\t"
             << nama[i] << "\t"
             << nilai[i] << "\t"
             << grade[i] << "\t";

        if (grade[i] == 'A' || grade[i] == 'B' || grade[i] == 'C')
            cout << "LULUS";
        else
            cout << "TIDAK LULUS";

        cout << endl;
    }

    // ================= FILTER 1 MAHASISWA =================
    cout << "\n=====================================\n";
    cout << "FILTER: TAMPILKAN 1 MAHASISWA\n";
    cout << "=====================================\n";
    cout << "Masukkan nomor mahasiswa (1-" << jumlah << ") : ";
    cin >> pilih;

    if (pilih >= 1 && pilih <= jumlah) {
        int i = pilih - 1;

        cout << "\nDATA MAHASISWA TERPILIH\n";
        cout << "Nama  : " << nama[i] << endl;
        cout << "Nilai : " << nilai[i] << endl;
        cout << "Grade : " << grade[i] << endl;

        if (grade[i] == 'A' || grade[i] == 'B' || grade[i] == 'C')
            cout << "Status: LULUS" << endl;
        else
            cout << "Status: TIDAK LULUS" << endl;
    } else {
        cout << "Nomor mahasiswa tidak valid.\n";
    }

    return 0;
}

