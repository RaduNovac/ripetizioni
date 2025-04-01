#include <iostream>
#include <cstdlib>   // per rand() e srand()
#include <ctime>     // per time()

using namespace std;

const int DIM = 30;
const int MIN_VAL = 1;
const int MAX_VAL = 20;

// Funzione per generare un numero casuale tra 1 e 20
int generaNumero() {
    return rand() % MAX_VAL + MIN_VAL;
}

// Funzione per calcolare la frequenza dei numeri da 1 a 20
void calcolaFrequenza(const int arr[], int freq[], int n) {
    for (int i = 0; i < MAX_VAL; i++) {
        freq[i] = 0; // Inizializza il vettore delle frequenze
    }
    for (int i = 0; i < n; i++) {
        freq[arr[i] - 1]++; // Incrementa la posizione corrispondente al numero
    }
}

// Funzione per trovare le posizioni di un numero specifico nel vettore
void trovaPosizioni(const int arr[], int n, int num) {
    bool trovato = false;
    cout << "Il numero " << num << " si trova nelle posizioni: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            cout << i << " ";
            trovato = true;
        }
    }
    if (!trovato) {
        cout << "(non presente)";
    }
    cout << endl;
}

// Funzione per contare i numeri pari e dispari
void contaPariDispari(const int arr[], int n, int &pari, int &dispari) {
    pari = 0;
    dispari = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            pari++;
        else
            dispari++;
    }
}

// Funzione per trovare il massimo e il minimo valore nel vettore
void trovaMaxMin(const int arr[], int n, int &max, int &min) {
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
}

int main() {
    srand(time(0)); // Inizializza il generatore di numeri casuali
    
    int numeri[DIM]; // Vettore per i numeri casuali
    int frequenze[MAX_VAL]; // Vettore per la frequenza di ciascun numero
    
    // Generazione del vettore di 30 numeri casuali
    for (int i = 0; i < DIM; i++) {
        numeri[i] = generaNumero();
    }
    
    // Stampa del vettore generato
    cout << "Vettore generato:\n";
    for (int i = 0; i < DIM; i++) {
        cout << numeri[i] << " ";
    }
    cout << "\n\n";
    
    // Calcolo della frequenza
    calcolaFrequenza(numeri, frequenze, DIM);
    cout << "Frequenza dei numeri:\n";
    for (int i = 0; i < MAX_VAL; i++) {
        cout << "Numero " << (i + 1) << ": " << frequenze[i] << " volte\n";
    }
    
    // Ricerca della posizione di un numero inserito dall'utente
    int numeroDaCercare;
    cout << "\nInserisci un numero da cercare (1-20): ";
    cin >> numeroDaCercare;
    if (numeroDaCercare >= MIN_VAL && numeroDaCercare <= MAX_VAL) {
        trovaPosizioni(numeri, DIM, numeroDaCercare);
    } else {
        cout << "Numero non valido!" << endl;
    }
    
    // Conteggio dei numeri pari e dispari
    int pari, dispari;
    contaPariDispari(numeri, DIM, pari, dispari);
    cout << "\nNumeri pari: " << pari << "\n";
    cout << "Numeri dispari: " << dispari << "\n";
    
    // Ricerca del massimo e minimo
    int max, min;
    trovaMaxMin(numeri, DIM, max, min);
    cout << "\nValore massimo: " << max << "\n";
    cout << "Valore minimo: " << min << "\n";
    
    return 0;
}
