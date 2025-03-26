/*
Creare una funzione che riceve tre numeri interi e 
restituisce la differenza tra il più grande e il più piccolo.
*/

#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()
#include <cmath> //Serve per usare la funzione di libreria abs()

using namespace std;

int function(int a, int b, int c);

int main(){
    
    int a=2;
    int b=7;
    int c=18;
    int differenza = 0;

    function(a, b, c);

	return 0;
}

int function(int a, int b, int c) {
    //int differenza = 0;

    int maggiore = 0;
    int medio = 0;
    int minimo = 0;
    
    //a=2, b=7, c=18
    // a
    if(a >= b && a >= c){//falso
        maggiore = a;
        cout << "maggiore a\n";
    }
    else if(a < b && a > c){//falso
        medio = a;
    }
    else if(a <  c){//vero
        minimo = a;
        cout << "minimo a\n";
    }
    
    //a=2, b=7, c=18
    // b
    if(b >= a && b >= c){//falso
        maggiore = b;
        cout << "maggiore b\n";
    }
    else if(b < a && b > c){//falso
        medio = b;
    }
    else if(b <  c){//vero
        minimo = b;//Ma ora il minimo è b ma b>a!!!
        cout << "minimo b\n";
    }
    
    //a=2, b=7, c=18
    // c
    if(c >= a && c >= b){//vero
        maggiore = c;
        cout << "maggiore c\n";
    }
    else if(c < a && c > b){//falso
        medio = c;
    }
    else{//perché non hai messi un lese if anche qua come nei casi a e b?
        minimo = c;
        cout << "minimo c\n";
    }

    int differenza = 0;

    cout << "maggiore: " << maggiore<< endl;;
    cout << "minore: " << minimo << endl;

    differenza = maggiore - minimo;
    cout << differenza<< endl;

    return differenza;
}