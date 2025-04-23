#include <iostream>
#include <cmath>

using namespace std;

// Funzione per verificare se un numero è primo
bool primo(int numero) {
    if(numero < 2){//Se è <  2 non è primo per definizione
        return false;
    }

    for(int i = 2; i <= numero; i++){//parto da 2 e non 1 perché ogni numero intero diviso 1 da resto 0
        if(numero % i == 0){
            return false;
        }
    }
    
    return true;
}

// Funzione che restituisce l'n-esimo numero primo
int ennesimoPrimo(int n){
    int conteggio = 0;
    int numero = 1;

    while(conteggio < n){
        numero++;
        if (primo(numero)){
            conteggio++;
        }
    }

    return numero;
}

// Funzione principale
int main(){
    int n;

    do{
        cout << "Inserisci un numero intero positivo (0 o negativo per uscire): ";
        cin >> n;

        if(n > 0){//Se il numero inserito è > 0
            int risultato = ennesimoPrimo(n);
            cout << "Il " << n << "-esimo numero primo è: " << risultato << endl;
        }

    }while(n > 0);//Fino a quando il numero preso in input è > 0

    cout << "Programma terminato." << endl;
    return 0;
}