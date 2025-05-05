#include <iostream>
#include <cstdlib>  // per rand(), srand()
#include <ctime>    // per time()

using namespace std;

/*
g++ -std=c++11 es_4.cpp -o es_4

Far scegliere al computer un numero tra 0 e 10.000 e chiedere all'utente di
indovinarlo.
Il programma, scelto un numero, lo terrà nascosto, ma dopo ogni tentativo del
utente dice se il numero proposto è più piccolo o più grande di quello casuale.
Il programma finisce quando l'utente indovina il numero.
Tenere conto di quanti tentativi fa l'utente per indovinare.
*/

int main() {
    // Inizializza il generatore di numeri casuali
    srand((time(0)));

    // Il numero segreto, tra 0 e 10000
    int segreto = rand() % 10001;  
    int tentativo;
    int contatore = 0;

    cout << "Indovina il numero segreto (tra 0 e 10000)!" << endl;

    // Ciclo finché l'utente non indovina
    do {
        cout << "Inserisci il tuo tentativo: ";
        cin >> tentativo;
        contatore++;

        if (tentativo < segreto) {
            cout << "Troppo basso, riprova." << endl;
        }
        else if (tentativo > segreto) {
            cout << "Troppo alto, riprova." << endl;
        }
        // altrimenti è uguale e il ciclo si interrompe
    } while (tentativo != segreto);

    cout << "Complimenti! Hai indovinato il numero " << segreto <<" in "
         << contatore << " tentativi." << endl;

    return 0;
}
