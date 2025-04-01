#include <iostream>
#include <cstdlib>   // per rand() e srand()
#include <ctime>     // per time()

using namespace std;

// Costanti per dimensioni degli array
#define NUM_VOTI 20     // numero di voti per ogni studente
#define NUM_STUDENTI 3  // numero di studenti

// Funzione che genera un voto casuale nell'intervallo 18-31
// 31 rappresenta il voto "30 con lode".
int generaVoto() {
    // rand() % (max - min + 1) + min
    return rand() % (31 - 18 + 1) + 18;
}

// Funzione che calcola la media dei voti contenuti in un array
// Parametri: voti[] è l'array dei voti, n è il numero di voti.
double calcolaMedia(int voti[], int n) {
    double somma = 0;
    for (int i = 0; i < n; i++) {
        somma += voti[i];
    }
    return somma / n;
}

// Funzione che calcola la frequenza dei voti da 18 a 30 e il numero di lodi.
// Parametri:
// - voti[]: array dei voti
// - n: numero di voti nell'array
// - freq[]: array di dimensione 13, dove freq[0] conta il numero di 18, ..., freq[12] conta il numero di 30
// - countLodi: variabile in cui verrà salvato il numero di voti "con lode" (cioè i voti pari a 31)
void calcolaFrequenza(int voti[], int n, int freq[], int &countLodi) {
    // Inizializziamo il vettore delle frequenze a zero per tutti i voti da 18 a 30
    for (int i = 0; i < 13; i++) {
        freq[i] = 0;
    }
    countLodi = 0;
    
    for (int i = 0; i < n; i++) {
        if (voti[i] == 31) {
            // 31 rappresenta il voto "30 con lode"
            countLodi++;
        } else if (voti[i] >= 18 && voti[i] <= 30) {
            // Il voto 18 corrisponde all'indice 0, 19 all'indice 1, e così via...
            freq[voti[i] - 18]++;
        }
    }
}

// Funzione che trova il voto minimo e il voto massimo in un array
// Parametri:
// - voti[]: array dei voti
// - n: numero di voti
// - min: variabile per salvare il voto minimo trovato (output)
// - max: variabile per salvare il voto massimo trovato (output)
void trovaMinMax(int voti[], int n, int &min, int &max) {
    min = voti[0];
    max = voti[0];
    
    for (int i = 1; i < n; i++) {
        if (voti[i] < min)
            min = voti[i];
        if (voti[i] > max)
            max = voti[i];
    }
}

// Funzione per stampare i voti contenuti in un array.
// Se il voto è 31, lo stampiamo come "30L" per indicare la lode.
void stampaVoti(int voti[], int n) {
    for (int i = 0; i < n; i++) {
        if (voti[i] == 31)
            cout << "30L ";
        else
            cout << voti[i] << " ";
    }
    cout << endl;
}

int main() {
    // Inizializzo il seme per la generazione dei numeri casuali
    srand(time(0));
    
    // Creo tre array per tre studenti, ognuno con NUM_VOTI voti
    int studente1[NUM_VOTI];
    int studente2[NUM_VOTI];
    int studente3[NUM_VOTI];
    
    // Genero i voti per ciascuno studente
    for (int i = 0; i < NUM_VOTI; i++) {
        studente1[i] = generaVoto();
        studente2[i] = generaVoto();
        studente3[i] = generaVoto();
    }
    
    // Ora elaboro i dati per ogni studente utilizzando le funzioni definite.
    // Per rendere il codice più ordinato, uso un ciclo che processa ciascuno degli array.
    // Creo un array di puntatori agli array degli studenti (Rossi aveva usato i puntatori per gli indici degli array).
    int* studenti[NUM_STUDENTI] = {studente1, studente2, studente3};
    
    // Elaboro i dati per ogni studente, uso s come variabile al posto di i
    for (int s = 0; s < NUM_STUDENTI; s++) {
        cout << "==============================" << endl;
        cout << "Dati per Studente " << s + 1 << ":" << endl;
        
        // Stampa dei voti
        cout << "Voti: ";
        stampaVoti(studenti[s], NUM_VOTI);
        
        // Calcolo e stampa della media
        double media = calcolaMedia(studenti[s], NUM_VOTI);
        cout << "Media: " << media << endl;
        
        // Calcolo della frequenza dei voti e dei voti con lode
        int freq[13];      // Array per la frequenza dei voti da 18 a 30
        int countLodi;     // Contatore per i voti "con lode" (31)
        calcolaFrequenza(studenti[s], NUM_VOTI, freq, countLodi);
        
        cout << "Frequenza dei voti:" << endl;
        // Per ogni voto da 18 a 30 stampiamo la frequenza
        for (int voto = 18; voto <= 30; voto++) {
            cout << "Voto " << voto << ": " << freq[voto - 18] << " volte" << endl;
        }
        cout << "Numero di voti con lode (30L): " << countLodi << endl;
        
        // Trovare il voto minimo e il voto massimo
        int min, max;
        trovaMinMax(studenti[s], NUM_VOTI, min, max);
        
        // Gestisco la stampa del voto massimo: se è 31, lo rappresento come 30L
        cout << "Voto minimo: ";
        if(min == 31){
		        cout << "30L" << endl;
        } 
        else{
		        cout << min << endl;
        }
        
        cout << "Voto massimo: ";
        if(max == 31){
		        cout << "30L" << endl;
        }
        else{
		        cout << max << endl;
        }
        
        cout << "==============================" << endl << endl;
    }
    
    return 0;
}