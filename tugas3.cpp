#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tas = {"Pedang Kayu", "Perisai Besi"};

    cout << tas[0] << endl;

    tas.insert(tas.begin(), "Potion Darah");
    tas.insert(tas.begin() + 2, "Busur Panah");
    tas.erase(tas.begin() + 3);

    cout << "Hasil Akhir: ";
    for (string item : tas) {
        cout << item << " | ";
    }
    cout << endl;

    return 0;
}