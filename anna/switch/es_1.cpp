#include <iostream>
using namespace std;

/*
g++ -std=c++11 es_1.cpp -o es_1

Creare un menù con le voci necessarie per effettuare le operazioni matematiche:
Somma, sottrazione, etc.

Una volta scelto il tipo di operazioni, continuare a chiedere due numeri in input
da usare per l'operazione scelta) fino a che l'utente non digita 'u' per uscire.
l'uscita dal menù della scelta dei numeri dovrà riportare al menù iniziale della
scelta dell'operazione. Solo l'uscita a questo livello termina il programma.
*/

int main() {
    char sceltaOperazione, continua;
    double num1, num2, risultato;

    do {
        // Menu principale per la scelta dell'operazione
        cout << "=== Calcolatrice ===" << endl;
        cout << "Scegli un'operazione:" << endl;
        cout << "1. Somma" << endl;
        cout << "2. Sottrazione" << endl;
        cout << "3. Moltiplicazione" << endl;
        cout << "4. Divisione" << endl;
        cout << "u. Uscita" << endl;
        cout << "Scelta: ";
        cin >> sceltaOperazione;

        switch (sceltaOperazione) {
            case '1':
            case '2':
            case '3':
            case '4':
                do{
                    cout << "\nInserisci 'u' per tornare al menu o qualsiasi altro tasto per continuare: ";
                    cin >> continua;
					//Se l'utente inserisce u non chiedo i due numeri e torno alla scelta dell'operazione
                    if(continua == 'u') {
                        break; // Torna al menu principale
                    }

                    // Richiesta dei due numeri
                    cout << "Inserisci il primo numero: ";
                    cin >> num1;
                    cout << "Inserisci il secondo numero: ";
                    cin >> num2;

                    switch(sceltaOperazione){
                        case '1':
                            risultato = num1 + num2;
                            cout << "Risultato: " << risultato << endl;
                            break;
                        case '2':
                            risultato = num1 - num2;
                            cout << "Risultato: " << risultato << endl;
                            break;
                        case '3':
                            risultato = num1 * num2;
                            cout << "Risultato: " << risultato << endl;
                            break;
                        case '4':
                            if (num2 != 0) {//Non posso dividere per zero!
                                risultato = num1 / num2;
                                cout << "Risultato: " << risultato << endl;
                            } else {
                                cout << "Errore: divisione per zero!" << endl;
                            }
                            break;
                    }

                } while(continua != 'u'/*true*/);//Mi permetto di usare il while true perché uso un break per interrompere il ciclo e il case! Il while(true) va usato con cognizione di causa
                break;

            case 'u':
                cout << "Uscita dal programma. Arrivederci!" << endl;
                break;

            default:
                cout << "Scelta non valida. Riprova." << endl;
        }

    } while (sceltaOperazione != 'u');

    return 0;
}