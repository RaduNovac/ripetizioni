#include <iostream>

using namespace std;

int main() {
    int numeri[5]; // Creo un array di 5 interi

    // Assegno valori alle 5 posizioni
    numeri[0] = 10;
    numeri[1] = 20;
    numeri[2] = 30;
    numeri[3] = 40;
    numeri[4] = 50;

    // Stampo alcuni valori
    cout << "Il primo numero è: " << numeri[0] << endl;
    cout << "Il terzo numero è: " << numeri[2] << endl;

    // Stampo tutto l'array
    for(int i = 0; i < 5; i++){
        cout << numeri[i] << endl;
    }

    //Alternativa: ciclo for-each
    for(int n : numeri){
        cout << n << endl;
    }

    return 0;
}
