#include <iostream>
#include <cstdlib>   // per rand() e srand()
#include <ctime>     // per time()

using namespace std;

// Costanti
const int NUM_GIORNI = 10;   // numero di giorni di mercato
const int THRESHOLD  = 15;    // soglia per considerare le vendite elevate (in kg)

// *******************************************************************
// Funzione per generare casualmente il quantitativo di vendita
// Genera un numero casuale compreso tra 0 e 20 (in kg)
// *******************************************************************
int generaQuantita() {
    return rand() % 21; // restituisce un numero tra 0 e 20
}

// *******************************************************************
// Funzione per calcolare la somma degli elementi di un array
// Parametri: arr[] è l'array, n è il numero di elementi
// *******************************************************************
int sommaArray(int arr[], int n) {
    int somma = 0;
    for (int i = 0; i < n; i++) {
        somma += arr[i];
    }
    return somma;
}

// *******************************************************************
// Funzione per contare quanti giorni in cui il quantitativo supera una certa soglia
// Parametri: arr[] è l'array, n è il numero di elementi, soglia è il valore da superare
// *******************************************************************
int contaSuperiore(int arr[], int n, int soglia) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > soglia)
            count++;
    }
    return count;
}

// *******************************************************************
// Funzione per calcolare la media giornaliera delle vendite per un agricoltore
// Calcola la media considerando le vendite di tutti i prodotti in ogni giorno
// *******************************************************************
double calcolaMediaGiornaliera(int frutta[], int verdura[], int cereali[], int n) {
    int totale = 0;
    for (int i = 0; i < n; i++) {
        totale += frutta[i] + verdura[i] + cereali[i];
    }
    // Per ottenere un risultato in virgola mobile basta dividere per 1.0
    return (1.0 * totale) / n;
}

// *******************************************************************
// Funzione per stampare i dati giornalieri delle vendite di un agricoltore
// Ogni giorno vengono stampate le vendite di frutta, verdura e cereali
// *******************************************************************
void stampaVenditeGiornaliere(int frutta[], int verdura[], int cereali[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Giorno " << i + 1 << ": ";
        cout << "Frutta: " << frutta[i] << " kg, ";
        cout << "Verdura: " << verdura[i] << " kg, ";
        cout << "Cereali: " << cereali[i] << " kg" << endl;
    }
}

int main() {
    // Inizializziamo il seme per la generazione dei numeri casuali
    srand(time(0));
    
    // Per ogni agricoltore, creiamo tre array (uno per ogni prodotto)
    // Agricoltore 1
    int frutta1[NUM_GIORNI], verdura1[NUM_GIORNI], cereali1[NUM_GIORNI];
    // Agricoltore 2
    int frutta2[NUM_GIORNI], verdura2[NUM_GIORNI], cereali2[NUM_GIORNI];
    // Agricoltore 3
    int frutta3[NUM_GIORNI], verdura3[NUM_GIORNI], cereali3[NUM_GIORNI];
    
    // Generazione dei dati casuali per ogni agricoltore, per 10 giorni
    for (int i = 0; i < NUM_GIORNI; i++) {
        // Agricoltore 1
        frutta1[i]   = generaQuantita();
        verdura1[i]  = generaQuantita();
        cereali1[i]  = generaQuantita();
        
        // Agricoltore 2
        frutta2[i]   = generaQuantita();
        verdura2[i]  = generaQuantita();
        cereali2[i]  = generaQuantita();
        
        // Agricoltore 3
        frutta3[i]   = generaQuantita();
        verdura3[i]  = generaQuantita();
        cereali3[i]  = generaQuantita();
    }
    
    // Elaborazione ed output per ogni agricoltore
    
    // ---- Agricoltore 1 ----
    cout << "----- Agricoltore 1 -----" << endl;
    cout << "\nVendite giornaliere:" << endl;
    stampaVenditeGiornaliere(frutta1, verdura1, cereali1, NUM_GIORNI);
    
    // Totale venduto per ogni prodotto
    int totFrutta1  = sommaArray(frutta1, NUM_GIORNI);
    int totVerdura1 = sommaArray(verdura1, NUM_GIORNI);
    int totCereali1 = sommaArray(cereali1, NUM_GIORNI);
    cout << "\nTotale venduto:" << endl;
    cout << "Frutta: " << totFrutta1 << " kg" << endl;
    cout << "Verdura: " << totVerdura1 << " kg" << endl;
    cout << "Cereali: " << totCereali1 << " kg" << endl;
    
    // Media giornaliera (somma delle vendite di tutti i prodotti per giorno)
    double media1 = calcolaMediaGiornaliera(frutta1, verdura1, cereali1, NUM_GIORNI);
    cout << "\nMedia giornaliera: " << media1 << " kg" << endl;
    
    // Frequenza dei giorni in cui le vendite superano la soglia per ciascun prodotto
    int freqFrutta1  = contaSuperiore(frutta1, NUM_GIORNI, THRESHOLD);
    int freqVerdura1 = contaSuperiore(verdura1, NUM_GIORNI, THRESHOLD);
    int freqCereali1 = contaSuperiore(cereali1, NUM_GIORNI, THRESHOLD);
    cout << "\nGiorni con vendite superiori a " << THRESHOLD << " kg:" << endl;
    cout << "Frutta: " << freqFrutta1 << " giorni" << endl;
    cout << "Verdura: " << freqVerdura1 << " giorni" << endl;
    cout << "Cereali: " << freqCereali1 << " giorni" << endl;
    
    // ---- Agricoltore 2 ----
    cout << "\n-----------------------------" << endl;
    cout << "----- Agricoltore 2 -----" << endl;
    cout << "\nVendite giornaliere:" << endl;
    stampaVenditeGiornaliere(frutta2, verdura2, cereali2, NUM_GIORNI);
    
    int totFrutta2  = sommaArray(frutta2, NUM_GIORNI);
    int totVerdura2 = sommaArray(verdura2, NUM_GIORNI);
    int totCereali2 = sommaArray(cereali2, NUM_GIORNI);
    cout << "\nTotale venduto:" << endl;
    cout << "Frutta: " << totFrutta2 << " kg" << endl;
    cout << "Verdura: " << totVerdura2 << " kg" << endl;
    cout << "Cereali: " << totCereali2 << " kg" << endl;
    
    double media2 = calcolaMediaGiornaliera(frutta2, verdura2, cereali2, NUM_GIORNI);
    cout << "\nMedia giornaliera: " << media2 << " kg" << endl;
    
    int freqFrutta2  = contaSuperiore(frutta2, NUM_GIORNI, THRESHOLD);
    int freqVerdura2 = contaSuperiore(verdura2, NUM_GIORNI, THRESHOLD);
    int freqCereali2 = contaSuperiore(cereali2, NUM_GIORNI, THRESHOLD);
    cout << "\nGiorni con vendite superiori a " << THRESHOLD << " kg:" << endl;
    cout << "Frutta: " << freqFrutta2 << " giorni" << endl;
    cout << "Verdura: " << freqVerdura2 << " giorni" << endl;
    cout << "Cereali: " << freqCereali2 << " giorni" << endl;
    
    // ---- Agricoltore 3 ----
    cout << "\n-----------------------------" << endl;
    cout << "----- Agricoltore 3 -----" << endl;
    cout << "\nVendite giornaliere:" << endl;
    stampaVenditeGiornaliere(frutta3, verdura3, cereali3, NUM_GIORNI);
    
    int totFrutta3  = sommaArray(frutta3, NUM_GIORNI);
    int totVerdura3 = sommaArray(verdura3, NUM_GIORNI);
    int totCereali3 = sommaArray(cereali3, NUM_GIORNI);
    cout << "\nTotale venduto:" << endl;
    cout << "Frutta: " << totFrutta3 << " kg" << endl;
    cout << "Verdura: " << totVerdura3 << " kg" << endl;
    cout << "Cereali: " << totCereali3 << " kg" << endl;
    
    double media3 = calcolaMediaGiornaliera(frutta3, verdura3, cereali3, NUM_GIORNI);
    cout << "\nMedia giornaliera: " << media3 << " kg" << endl;
    
    int freqFrutta3  = contaSuperiore(frutta3, NUM_GIORNI, THRESHOLD);
    int freqVerdura3 = contaSuperiore(verdura3, NUM_GIORNI, THRESHOLD);
    int freqCereali3 = contaSuperiore(cereali3, NUM_GIORNI, THRESHOLD);
    cout << "\nGiorni con vendite superiori a " << THRESHOLD << " kg:" << endl;
    cout << "Frutta: " << freqFrutta3 << " giorni" << endl;
    cout << "Verdura: " << freqVerdura3 << " giorni" << endl;
    cout << "Cereali: " << freqCereali3 << " giorni" << endl;
    
    cout << "\n-----------------------------" << endl;
    return 0;
}
