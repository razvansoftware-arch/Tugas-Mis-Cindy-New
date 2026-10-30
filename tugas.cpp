#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> antrian = {"Budi", "Siti"};

    cout << "Antrian awal: ";
    for (string orang : antrian) {
        cout << orang << " ";
    }
    cout << endl;

    antrian.push_back("Dewi");
    cout << "Dewi antri: ";
    for (string orang : antrian) {
        cout << orang << " ";
    }
    cout << endl;

    antrian.insert(antrian.begin(), "Roni");
    cout << "Roni nyelak: ";
    for (string orang : antrian) {
        cout << orang << " ";
    }
    cout << endl;

    antrian.erase(antrian.begin());
    cout << "Roni dihapus: ";
    for (string orang : antrian) {
        cout << orang << " ";
    }
    cout << endl;

    return 0;
}