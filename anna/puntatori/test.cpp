#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()

using namespace std;

int numero_random();

int main(){
    // valore del seed
	srand(time(0));

    //Punto 1: vettori per tenere traccia dei lanci effettuati da ciascun giocatore
    int p1[119],p2[119],p3[119];

    //vettori per tenere traccia delle frequenze dei numeri
    int num_p1[6], num_p2[6], num_p3[6];
	
	return 0;
}
//Punto 2: funzione per la generazione dei numeri random
int numero_random(){
    return rand() % (6 - 1 + 1) + 1;//(max - min + 1) + min
}

//Punto 3: funzione per la frequenza dei numeri da 1 a 6 in un vettore
void check(){}