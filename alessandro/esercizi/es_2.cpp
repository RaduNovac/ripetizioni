#include <iostream>

using namespace std;

// Funzione che somma elemento per elemento due vettori
void sommaVettori(const int v1[], const int v2[], int risultato[], int dim){
    for(int i = 0; i < dim; i++){
        risultato[i] = v1[i] + v2[i];
    }
}

int main(){
    int n;

    // 1. Inserimento della dimensione dei vettori
    cout << "Inserisci la dimensione dei vettori: ";
    cin >> n;

    int v1[n], v2[n], risultato[n];

    // 2. Inserimento del primo vettore
    cout << "Inserisci " << n << " numeri per il primo vettore:" << endl;
    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }

    // 3. Inserimento del secondo vettore
    cout << "Inserisci " << n << " numeri per il secondo vettore:" << endl;
    for(int i = 0; i < n; i++){
        cin >> v2[i];
    }

    // 4. Chiamata alla funzione per sommare i vettori
    sommaVettori(v1, v2, risultato, n);

    // 5. Stampa del vettore risultante
    cout << "Vettore risultante dalla somma:" << endl;
    for(int i = 0; i < n; i++){
        cout << risultato[i] << " ";
    }

    cout << endl;

    return 0;
}
