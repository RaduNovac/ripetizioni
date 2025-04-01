/*
a) Scrivere una funzione che ricevuti la lunghezza di un percorso in km, 
quanti kilometri effettua un’auto con un litro e il costo al litro 
del carburante, calcolo il costo per il viggio.
b) Nel main, chiedere all’utente di inserire il consumo dell’auto e 
il prezzo del carburante, poi calcola il costo di tre viaggi 
con tre lunghezze inserite dall’utente.

g++ es_6.cpp -o es_6
./es_6
*/















#include <iostream>
using namespace std;

// Funzione per calcolare il costo del viaggio, alla fine basta dividere i km che si fanno per il consumo al km e moltiplicatlo per il prezzo in litri del carburante
double calcolaCostoViaggio(double km, double consumo, double prezzo) {
    return (km / consumo) * prezzo;
}

int main() {
    double consumo, prezzo;
    
    // Input del consumo dell'auto e del prezzo del carburante
    cout << "Inserisci il consumo dell'auto (km per litro): ";
    cin >> consumo;
    cout << "Inserisci il prezzo del carburante per litro: ";
    cin >> prezzo;
    
    double lunghezze[3];
    
    // Input delle tre lunghezze dei viaggi
    for (int i = 0; i < 3; i++) {
        cout << "Inserisci la lunghezza del viaggio " << i + 1 << " in km: ";
        cin >> lunghezze[i];
    }
    
    // Calcolo e output del costo per ogni viaggio
    for (int i = 0; i < 3; i++) {
        double costo = calcolaCostoViaggio(lunghezze[i], consumo, prezzo);
        cout << "Il costo del viaggio " << i + 1 << " e': " << costo << " euro." << endl;
    }
    
    return 0;
}
