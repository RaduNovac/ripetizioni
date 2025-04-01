/*
a) Creare una funzione che calcola quanti divisori ha un numero naturale.
b) Creare poi un programma che ricevuto dall’utente un numero naturale n 
stampi il numero d che indica quanti divisori ha n e poi stampi quanti 
divisori ha il numero d.

g++ es_4.cpp -o es_4
./es_4
*/

















#include <iostream>

using namespace std;

// Funzione che calcola il numero di divisori di un numero naturale
int contaDivisori(int n) {
    int divisori = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisori++;
        }
    }
    return divisori;
}

int main() {
    int n = 0;

    do{// Fino a quando non 
        // Input del numero naturale
        cout << "Inserisci un numero naturale: ";
        cin >> n;
    }
    while(n <= 0);
    
    // Calcolo dei divisori di n
    int d = contaDivisori(n);
    cout << "Il numero " << n << " ha " << d << " divisori." << endl;
    
    // Calcolo dei divisori di d
    int d_divisors = contaDivisori(d);
    cout << "Il numero " << d << " ha " << d_divisors << " divisori." << endl;
    
    return 0;
}
