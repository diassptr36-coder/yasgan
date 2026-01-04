#include <iostream>
using namespace std;

int main() {
    int jumlah;
    string nama;
    int vote;

    int sangatBaik = 0, baik = 0, cukup = 0, kurang = 0;

    cout << "=====================================\n";
    cout << " SISTEM VOTING PENILAIAN MAHASISWA\n";
    cout << "=====================================\n";
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlah;
    cin.ignore(); // membersihkan newline

    // ================= INPUT VOTING =================
    for (int i = 1; i <= jumlah; i++) {
        cout << "\nMahasiswa ke-" << i << endl;
        cout << "Nama Mahasiswa : ";
        getline(cin, nama);

        cout << "Pilih Penilaian\n";
        cout << "1. Sangat Baik\n";
        cout << "2. Baik\n";
        cout << "3. Cukup\n";
        cout << "4. Kurang\n";
        cout << "Masukkan pilihan (1-4) : ";
        cin >> vote;
        cin.ignore(); // penting setelah cin >>

        // ================= PERCABANGAN =================
        if (vote == 1)
            sangatBaik++;
        else if (vote == 2)
            baik++;
        else if (vote == 3)
            cukup++;
        else if (vote == 4)
            kurang++;
        else
            cout << "Pilihan tidak valid!\n";
    }

    // ================= OUTPUT HASIL VOTING =================
    cout << "\n=====================================\n";
    cout << " HASIL VOTING PENILAIAN MAHASISWA\n";
    cout << "=====================================\n";
    cout << "Sangat Baik : " << sangatBaik << " suara\n";
    cout << "Baik        : " << baik << " suara\n";
    cout << "Cukup       : " << cukup << " suara\n";
    cout << "Kurang      : " << kurang << " suara\n";

    // ================= MENENTUKAN HASIL TERBANYAK =================
    cout << "\nKESIMPULAN PENILAIAN : ";

    if (sangatBaik >= baik && sangatBaik >= cukup && sangatBaik >= kurang)
        cout << "SANGAT BAIK\n";
    else if (baik >= sangatBaik && baik >= cukup && baik >= kurang)
        cout << "BAIK\n";
    else if (cukup >= sangatBaik && cukup >= baik && cukup >= kurang)
        cout << "CUKUP\n";
    else
        cout << "KURANG\n";

    return 0;
}

