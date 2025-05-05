#include <iostream>
#include <cstdlib>  // per rand(), srand()
#include <ctime>    // per time()

using namespace std;
/*
g++ -std=c++11 es_5.cpp -o es_5

Creare un programma che riempie dun vettore di 1000 numeri casuali (23->172).
Poi creare un'unica funzione che con un solo ciclo FOR recuperi il numero più
piccolo, il più grande, il medio e la somma.
*/

// Numero di elementi
const int DIM = 1000;

// Prototipo: arr è il vettore di input, dim la sua dimensione.
// minVal, maxVal, somma e media sono passati per reference
void analizzaArray(int* arr, int dim,
                   int& minVal, int& maxVal,
                   long long& somma, double& media);

int main() {
    int vettore[DIM];

    // Inizializza il generatore casuale
    srand((time(0)));

    // 1) Riempio il vettore con numeri tra 23 e 172
    for (int i = 0; i < DIM; i++) {
        vettore[i] = rand() % (172 - 23 + 1) + 23;
    }

    // Variabili per i risultati
    int minVal, maxVal;
    long long somma;//è semplicemente un intero molto lungo, 
    double media;

    // 2) Chiamo la funzione che fa tutti i calcoli in un solo ciclo
    analizzaArray(vettore, DIM, minVal, maxVal, somma, media);

    // Stampo i risultati
    cout << "Valore minimo: " << minVal << endl;
    cout << "Valore massimo: " << maxVal << endl;
    cout << "Somma totale : " << somma  << endl;
    cout << "Media        : " << media  << endl;

    return 0;
}

void analizzaArray(int* arr, int dim,
                   int& minVal, int& maxVal,
                   long long& somma, double& media) {
    // Inizializzo min e max al primo elemento
    minVal = maxVal = arr[0];
    somma = 0;

    // Unico ciclo FOR per calcolare tutto
    for (int i = 0; i < dim; i++) {
        int v = arr[i];

        // Aggiorno il minimo
        if (v < minVal) {
            minVal = v;
        }
        // Aggioro il massimo
        if (v > maxVal) {
            maxVal = v;
        }
        // Accumulatore per la somma
        somma += v;
    }

    // Calcolo la media come somma / numero di elementi, trasformo l'esito in un double
    media = static_cast<double>(somma) / dim;
}
