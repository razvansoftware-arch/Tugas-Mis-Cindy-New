#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> daftarLagu = {"Ini Abadi", "Monokrom"};

    cout << daftarLagu[0] << endl;

    daftarLagu.push_back("Aitakatta");
    daftarLagu.insert(daftarLagu.begin() + 1, "everything u are");
    daftarLagu.erase(daftarLagu.begin());

    cout << "Hasil Akhir: ";
    for (string lagu : daftarLagu) {
        cout << lagu << " | ";
    }
    cout << endl;

    return 0;
}