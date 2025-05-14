/* 
    g++ -std=c++11 tmp.cpp -o tmp

    ./tmp
*/
#include <iostream>

using namespace std;

void stampa_fino_a_dispari(int v[], int dim){
    for(int i = 0; i < dim; i++){
        if(v[i] % 2 != 0){//il numero è dispari
            return;
        }
        else{
            cout << v[i] << endl;
        }
    }
}

void stampa_ciao(){
	cout << "Ciao!" << endl;
    return;
    cout << "Ciaone!" << endl;
    cout << "haha" << endl;
}

int somma(int a, int b) {   // ritorna un int, riceve due int come parametri
    return a + b;           // restituisce la somma dei due numeri
}

bool numero_pari(int n){
    bool risultato = false;

    if(n % 2 == 0){
        risultato = true;
    }

    return risultato;
}

void incrementa(int &n){
    n = n + 5;

    cout << "dentro la funzione: " << n << endl;
}

void scambia(int &x, int &y){
	int z;
	
	z = x;
	x = y;
	y = z;

    cout << "nella funzione = x: " << x << ", y: " << y << endl;
}

void stampa_array(int v[]){
	int i;
	
	for(i = 0;i < 5;i++){
		cout << v[i] << endl;
	}
}

void trasla(int v[]){
    int temporanea = v[0];

    for(int i = 0; i < 4; i++){
       /* cout << "i: " << i << endl;
        cout << "v[i]: " << v[i] << endl;
        cout << "v[i + 1]: " << v[i + 1] << endl;*/
        v[i] = v[i + 1];
    }

    v[4] = temporanea;
}

/*
    Creare una funzione che calcola e stampa a schermo il valore assoluto di un numero intero.
*/

void valore_assoluto(int numero){
    int risultato;

    if(numero < 0){//negativo
        risultato = numero * -1;
        cout << "a" << endl;
    }
    else{
        risultato = numero;
        cout << "b" << endl;
    }

    cout << risultato << endl;
}

int main(){
    //int x = valore_assoluto(-23);

    //cout << x << endl;

	return 0;
}