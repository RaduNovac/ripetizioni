#include <iostream>
#include <cstdlib>
#include <ctime>

#define DIM 1024

using namespace std;
/*
g++ -std=c++11 es_2.cpp -o es_2

Riempire un vettore di 1024 numeri interi compresi tra 1 e 1000.
Creare una funzione che divida i numeri pari da quelli dispari, copiandoli in
due vettori distinti.

prototipo da utilizzare:
void dividiPariDaDispari(int*, int, int*, int*)

Crete queste variabili globali in modi da poterle usare (modificare) all'interno
della funzione:

int dimLog_Pari
int dimLog_Dispari
*/

// Variabili globali per le dimensioni logiche dei due vettori
int dimLog_Pari = 0;
int dimLog_Dispari = 0;

// Prototipo
void dividiPariDaDispari(int* origine, int dim, int* pari, int* dispari);

int main() {
    int numeri[DIM];
    int vettorePari[DIM];
    int vettoreDispari[DIM];

    // Inizializzazione casuale
    srand(time(0));
    for (int i = 0; i < DIM; i++) {
        numeri[i] = rand() % 1000 + 1; // numeri tra 1 e 1000
    }

    // Chiamata alla funzione
    dividiPariDaDispari(numeri, DIM, vettorePari, vettoreDispari);

    // Output dei risultati
    cout << "Totale numeri pari: " << dimLog_Pari << endl;
    cout << "Totale numeri dispari: " << dimLog_Dispari << endl;

    // Ne stampo alcuni per verificare
    cout << "\nPrimi 10 numeri pari: ";
    for (int i = 0; i < min(10, dimLog_Pari); i++) {
        cout << vettorePari[i] << " ";
    }

    cout << "\nPrimi 10 numeri dispari: ";
    for (int i = 0; i < min(10, dimLog_Dispari); i++) {
        cout << vettoreDispari[i] << " ";
    }

    cout << endl;

    return 0;
}

// Funzione che divide i numeri in pari e dispari
void dividiPariDaDispari(int* origine, int dim, int* pari, int* dispari) {
    // Inizializzo i contatori delle dimensioni logiche a zero
    dimLog_Pari = 0;
    dimLog_Dispari = 0;

    // Ciclo su tutti gli elementi del vettore di origine
    for (int i = 0; i < dim; i++) {
        // Controllo se il numero è pari
        if (origine[i] % 2 == 0) {
            // Salvo il numero nel vettore dei pari
            pari[dimLog_Pari] = origine[i];
            // Incremento la dimensione logica dei pari
            dimLog_Pari++;
        } else {
            // Salvo il numero nel vettore dei dispari
            dispari[dimLog_Dispari] = origine[i];
            // Incremento la dimensione logica dei dispari
            dimLog_Dispari++;
        }
    }
}

