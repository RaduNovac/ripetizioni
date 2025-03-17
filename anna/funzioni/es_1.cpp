#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()
#include <cmath> //Serve per usare la funzione di libreria abs()
/*
Creare una funzione che calcola e restituisce il valore assoluto di un numero intero.
*/
using namespace std;

int valore_assoluto(int x){
	if(x >= 0){
        return x;
    }
    else{//x < 0
        return x * -1;
    }
}

int main(){
    int a = -6;

    cout << "il valore assoluto e': " << valore_assoluto(a) << endl;

    //cout << "il valore assoluto e': " << abs(a) << endl;
	
	return 0;
}