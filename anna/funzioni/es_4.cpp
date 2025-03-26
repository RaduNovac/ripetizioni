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
    cout << "la differenza tra min e max e': " << function(2,6,3) << endl;
    
	return 0;
}

int function(int a, int b, int c){
    int differenza = 0, maggiore = 0, minore = 0;
    
    //Maggiore
    if(a >= b){
        if(a >= c){
            maggiore = a;
        }
        else{
            maggiore = c;
        }
    }
    else{
        if(b >= c){
            maggiore = b;
        }
        else{
            maggiore = c;
        }
    }

    //Minore
    if(a <= b){
        if(a <= c){
            minore = a;
        }
        else{
            minore = c;
        }
    }
    else{
        if(b <= c){
            minore = b;
        }
        else{
            minore = c;
        }
    }

    differenza = maggiore - minore;

    return differenza;
}