/*
Creare una funzione che riceve una quantità di tempo in formato 
ore, minuti e secondi e la restituisce espressa solamente in secondi.

Creare poi un programma che si faccia passare due quantità di tempo e verifichi 
quale è maggiore utilizzando la funzione precedente e solamente due if nel programma.
*/

#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()
#include <cmath> //Serve per usare la funzione di libreria abs()

using namespace std;

int function(int ore, int minuti, int secondi);

int main(){
    int t1, t2;

    t1 = function(2,5,21);
    t2 = function(2,5,20);

    if(t1 > t2){
        cout << "t1 maggiore\n";
    }
    else{
        cout << "t2 maggiore\n";
    }
	
	return 0;
}

int function(int ore, int minuti, int secondi){
    int risultato = 0;
    //Sommo i secondi che onn devo trasformarli
    risultato += secondi;

    //Minuti
    minuti = minuti * 60;
    risultato += minuti;

    //Ore
    ore = ore * 3600;//3600 = 60 * 60
    risultato += ore;

    return risultato;
}