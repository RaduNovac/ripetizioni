/*
Creare una funzione che restituisce se un numero intero ha almeno 3 divisori.
Creare poi un programma che dica se un numero passato dall’utente e il più grande 
numero intero più piccolo del suo quadrato hanno almeno tre 
divisori.

g++ es_3.cpp -o es_3
./es_3
*/

#include <iostream>
#include <cmath>

using namespace std;

// Funzione per determinare se un numero ha almeno 3 divisori
bool haAlmenoTreDivisori(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            count++;
        }
        if (count >= 3) {
            return true;
        }
    }
    return false;
}

int main() {
    int num = 21;
    
    cout << "Inserisci un numero intero: ";
    cin >> num;
    
    int quadrato = num * num;
    int piuGrandeMinoreDelQuadrato = quadrato - 1;
    //condizione ? true : false, un abbreviazione molto efficace dell'if
    cout << "Il numero " << num << (haAlmenoTreDivisori(num) ? " ha" : " non ha") << " almeno tre divisori.\n";
    cout << "Il numero " << piuGrandeMinoreDelQuadrato << (haAlmenoTreDivisori(piuGrandeMinoreDelQuadrato) ? " ha" : " non ha") << " almeno tre divisori.\n";
    
    return 0;
}