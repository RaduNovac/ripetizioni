/*
Scrivere una funzione che dato un vettore di 100 caselle, riempie il vettore 
con numeri casuali tra 1 e 1000 in posizioni casuali. 
La funzione deve riempire tutto il vettore.

Alla fine stampare il massimo, il minimo e il valor medio del vettore
*/

#include <iostream>
#include <cstdlib>   // per rand() e srand()
#include <ctime>     // per time()

using namespace std;

int genera_num_casuale(int min, int max){
    // rand() % (max - min + 1) + min
    return rand() % (max - min + 1) + min;
}

bool vettore_pieno(int v[]){

    for(int i = 0; i < 100; i++){
        if(v[i] == -1){
            return false;
        }
    }

    return true;
}

void riempi_vettore(int v[]){
    while(vettore_pieno(v) == false){
        int posizione = genera_num_casuale(1, 100);
        int numero = genera_num_casuale(1,1000);
        v[posizione] = numero;
        cout << "posizione: " << posizione << "; numero: " << numero << endl;
    }
}


int main() {
    srand(time(0)); // Inizializza il generatore di numeri casuali
    
    int v[100];
    
    for(int i = 0; i < 100;i++){
        v[i] = -1;
    }

    riempi_vettore(v);

    //stampa vettore
    for(int i = 0; i < 100;i++){
        cout << "v["<<i<<"]: " << v[i] << endl; 
    }
    
    return 0;
}
