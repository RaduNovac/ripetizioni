//Memorizzare in un array di dieci posizioni i primi dieci numeri naturali.
/* 
    g++ -std=c++11 tmp.cpp -o tmp

    ./tmp

 array:      [0][1][2][3][4][5][6][7][8][9]
 posizione i: 0  1  2  3  4  5  6  7  8  9
*/
#include <iostream>

using namespace std;

int main(){
    int array[10];
    int valore = 0;

    for(int i = 0; i < 10;i++){
        array[i] = valore;
        valore++;
    }

    for(int i = 0; i < 10;i++){
        cout << "array["<<i<<"]:" << array[i] << endl;
    }

    return 0;
}