/* 
    g++ -std=c++11 tmp.cpp -o tmp

    ./tmp
*/
#include <iostream>

using namespace std;

int main(){
    int n = 7;

    string giorni_settimana[n];

    giorni_settimana[0] = "lunedì";
    giorni_settimana[1] = "martedì";
    giorni_settimana[2] = "mercoledì";
    giorni_settimana[3] = "giovedì";
    giorni_settimana[4] = "venerdì";
    giorni_settimana[5] = "sabato";
    giorni_settimana[6] = "domenica";
    /*
    1: la variabile che usi per fare il ciclo
    2: fino a dove vuoi arrivare
    3: come modifichi la variabile
    */
    for(int i = 0;i < n;i = i + 2){
        cout << giorni_settimana[i] << endl;
    }
    
    cout << sizeof(giorni_settimana) << endl;
    cout << sizeof(giorni_settimana[0]) << endl;
    
    int dimensione = sizeof(giorni_settimana) / sizeof(giorni_settimana[0]);

    cout << "dimensione vettore: " << dimensione << endl;

    return 0;
}