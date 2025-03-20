/*
Creare un programma che fa inserire all’utente tre caratteri e usando 
una funzione verifica e stampa quanti di questi sono lettere maiuscole.

versione void e int
*/

#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()
#include <cmath> //Serve per usare la funzione di libreria abs()

using namespace std;

void function(char a, char b, char c);
int function2(char a, char b, char c);

int main(){
    char a = 'A', b = 'j', c = 'r';

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    //Con tabella ascii
    if(a >= 65 && a <= 90){
        cout << "maiuscolo\n";
    }
    else if(a >= 97 && a <= 122){
        cout << "minuscolo\n";
    }
    //Senza tabella ascii
    if(a >= 'A' && a <= 'Z'){
        cout << "maiuscolooooo\n";
    }
    else if(a >= 'a' && a <= 'z'){
        cout << "minuscolooooo\n";
    }

    //approccio void
    function(a,b,c);
    //approccio int
    int x = function2(a,b,c);

    cout << "Ci sono " << x << " lettere maiuscoleeeeee.\n";
	
	return 0;
}
//verifica e stampa quanti di questi sono lettere maiuscole.
void function(char a, char b, char c){
    int contatore = 0;

    if(a >= 65 && a <= 90){
        contatore++;
    }

    if(b >= 65 && b <= 90){
        contatore++;
    }

    if(c >= 65 && c <= 90){
        contatore++;
    }

    if(contatore > 2){
        cout << "Ciaooooo\n";
    }

    cout << "Ci sono " << contatore << " lettere maiuscole.\n";
}
//verifica e ritorna quanti di questi sono lettere maiuscole.
int function2(char a, char b, char c){
    int contatore = 0;

    if(a >= 65 && a <= 90){
        contatore++;
    }

    if(b >= 65 && b <= 90){
        contatore++;
    }

    if(c >= 65 && c <= 90){
        contatore++;
    }

    return contatore;
}