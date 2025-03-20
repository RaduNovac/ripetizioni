#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()
#include <cmath> //Serve per usare la funzione di libreria abs()
/*
Dati due vettori di dimensione uguale, ritornare la somma di tutti i valori

Dati due vettori di dimensione uguale, inserire in un terzo vettore la somma delle celle corrispondenti
*/
using namespace std;

void function(int v1[], int v2[], int v3[]);

int main(){
    int v1[5] = {1,2,3,4,5};
    int v2[5] = {6,7,8,9,10};

    int v3[5] = {0,0,0,0,0};

    int a = 5;

    function(v1, v2, v3);

    for(int i = 0;i < 5;i++){
        cout << v3[i] << endl;
    }
	
	return 0;
}

void function(int v1[], int v2[], int v3[]){
    for(int i = 0;i < 5;i++){
        v3[i] += v1[i] + v2[i];
    }
}