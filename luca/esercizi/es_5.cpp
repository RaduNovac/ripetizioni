/*
a) Creare una funzione che dice se un carattere è una vocale.
b) Creare un programma che fa inserire la lunghezza di due parole 
(le due parole possono avere lunghezze diverse) e poi fa 
inserire le due parole un carattere alla volta. 
Alla fine il programma stampa per ogni parola quante vocali contiene.

g++ es_5.cpp -o es_5
./es_5
*/
















#include <iostream>
using namespace std;

// Funzione per verificare se un carattere è una vocale
bool is_vocale(char c) {
    //Se voglio semplificarmi la vita la converto in minuscola e verifico solo le minuscole e non anche le maiuscole
    //c = tolower(c);
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
       c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }

    return false;
    //return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int len1, len2, vocali1 = 0, vocali2 = 0;

    //Posso anche prendere direttamente in input le stringhe direttamente e poi contare per ciascuna stringa il numero di vocali, come facevamo lo scorso anno in laboratorio
    
    // Input lunghezze delle parole secondo la logica di Rossi con le dimensioni dell'array
    cout << "Inserisci la lunghezza della prima parola: ";
    cin >> len1;
    char parola1[len1];
    
    cout << "Inserisci la prima parola: ";
    for (int i = 0; i < len1; i++) {
        cin >> parola1[i];
    }
    
    cout << "Inserisci la lunghezza della seconda parola: ";
    cin >> len2;
    char parola2[len2];
    
    cout << "Inserisci la seconda parola: ";
    for (int i = 0; i < len2; i++) {
        cin >> parola2[i];
    }
    
    for (int i = 0; i < len1; i++) {
        if (is_vocale(parola1[i])) {
            vocali1++;
        }
    }
    
    for (int i = 0; i < len2; i++) {
        if (is_vocale(parola2[i])) {
            vocali2++;
        }
    }
    
    // Output del conteggio delle vocali
    cout << "La prima parola contiene " << vocali1 << " vocali." << endl;
    cout << "La seconda parola contiene " << vocali2 << " vocali." << endl;
    
    return 0;
}