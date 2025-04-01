/*
    Creare una funzione che scambia l'elemento minore di un array (int) con il maggiore.

    g++ es_7.cpp -o es_7
    ./es_7
*/





















#include <iostream>
using namespace std;

// Funzione per lo scambio di massimo e minimo
void scambia(int v[], int dim){
    int min = v[0], max = v[0];//Prendo il primo elemento come riferimento, po farò tutti i confronti
    int pos_min, pos_max, tmp;

    //Ricerca minimo
    for(int i = 1; i < dim; i++){
        if(v[i] < min){
            min = v[i];
            pos_min = i;
        }
    }

    //Ricerca massimo
    for(int i = 1; i < dim; i++){
        if(v[i] > max){
            max = v[i];
            pos_max = i;
        }
    }

    //Scambio, lo potrei fare benissimo anche con una funzione che passa i valori per riferimento!
    tmp = v[pos_min];
    v[pos_min] = v[pos_max];
    v[pos_max] = tmp;

}

int main() {
    int v[10] = {1,5,2,7,6,99,789,-3,14,46};
    int dim = sizeof(v)/sizeof(int);

    cout << "Vettore prima dello scambio: \n";
    for(int i = 0; i < dim; i++){
        cout << "v[" << i <<"]: " << v[i] << endl;
    }

    scambia(v, dim);

    cout << "Vettore dopo lo scambio: \n";
    for(int i = 0; i < dim; i++){
        cout << "v[" << i <<"]: " << v[i] << endl;
    }
    
    return 0;
}
