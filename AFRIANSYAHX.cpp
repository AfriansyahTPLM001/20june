#include <iostream>
using namespace std;

int hitung(int total, double proporsi) {
    return static_cast<int>(total * proporsi + 0.5);
}

int main() {
    const int TOTAL = 1000;

    double pDewasa, pAnakMuda, pAnakAnak;
    cout << "Masukkan proporsi dewasa (misal 0.5 untuk 50%): ";
    cin >> pDewasa;
    cout << "Masukkan proporsi anak muda (misal 0.3 untuk 30%): ";
    cin >> pAnakMuda;
    cout << "Masukkan proporsi anak-anak (sisanya): ";
    cin >> pAnakAnak;

    int dewasa    = hitung(TOTAL, pDewasa);
    int anakMuda  = hitung(TOTAL, pAnakMuda);
    int anakAnak  = hitung(TOTAL, pAnakAnak);

    int totalHitung = dewasa + anakMuda + anakAnak;

    if (totalHitung != TOTAL) {
        int selisih = TOTAL - totalHitung;
        anakAnak += selisih;
    }

    cout << "\nDistribusi pengunjung (dari " << TOTAL << " tiket):\n";
    cout << "  Dewasa     : " << dewasa    << endl;
    cout << "  Anak muda  : " << anakMuda  << endl;
    cout << "  Anak-anak  : " << anakAnak  << endl;
    cout << "=> Total = " << dewasa + anakMuda + anakAnak << endl;

    return 0;
}

