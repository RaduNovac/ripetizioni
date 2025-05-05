#include <iostream>
using namespace std;

/*
g++ -std=c++11 es_3.cpp -o es_3

Chiesto in input N compreso tra 3 e 40, disegnare a schermo il qaudrato di lato N.
Es: 5

* * * * *
*       *
*       *
*       *
* * * * *

tra un asterisco e l'altro ho inserito un spazio per una resa grafica migliore.
*/

int main() {
    int N;

    // Richiesta dell'input con controllo
    do {
        cout << "Inserisci un numero tra 3 e 40: ";
        cin >> N;
    } while (N < 3 || N > 40);

    cout << endl;
    //La ciccia del programma
    for (int riga = 0; riga < N; riga++) {
        for (int colonna = 0; colonna < N; colonna++) {
            /*
                Uso la logica del: disegno la cornice

                Quindi la prima e l'ultima riga le disegno, idem per le colonne
                Per TUTTO il resto metto solo spazi
            */
            // Prima o ultima riga: stampa sempre asterisco
            if (riga == 0 || riga == N - 1) {
                cout << "* ";
            }
            // Prima o ultima colonna: stampa asterisco
            else if (colonna == 0 || colonna == N - 1) {
                cout << "* ";
            }
            // Spazio interno
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}