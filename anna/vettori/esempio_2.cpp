#include <iostream>

using namespace std;

int main() {
    string macchine[] = {"Volvo","Fiat","BMW","Ferrari"};

    cout << "Dimensione in byte: " << sizeof(macchine) << endl;

    for (int i = 0; i < sizeof(macchine) / sizeof(string); i++) {
        cout << macchine[i] << "\n";
    }

    return 0;
}
