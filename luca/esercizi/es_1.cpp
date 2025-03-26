#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()

/*
Creare una funzione che calcola e restituisce il valore assoluto di un numero intero.
*/

using namespace std;

int valore_assoluto(int numero){
    if(numero >= 0){
        return numero;
    }
    else{//numero negativo
        return numero * -1;
    }
}

void controlla(int v[]){
    for(int i = 0;i < 10;i++){
        cout << v[i] << endl;
        if(v[i] % 7 == 0){
            return;
        }
    }
}

int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    
    cout << "Il valore assoluto e': " << valore_assoluto(-23) << endl;

    controlla(v);

	return 0;
}

