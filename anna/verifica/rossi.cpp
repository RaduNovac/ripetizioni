#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#define numeroLanci 100
#define posizioneFinale 120

using namespace std;

int numCasualeTra(int, int);
string calcolaFrequenza(int*, int, string);

int main()
{
    int turno = 0;
    
    int dim_log_1 = 0;
    int dim_log_2 = 0;
    int dim_log_3 = 0;
    
    int posPlayer_1 = 0;
    int posPlayer_2 = 0;
    int posPlayer_3 = 0;
    
    int tiro1, tiro2, tiro3;
    int player_1[numeroLanci];
    int player_2[numeroLanci];
    int player_3[numeroLanci];

    srand(time(0));

    do {
        turno++;
        // player_1
        tiro1 = numCasualeTra(1, 6);
        player_1[dim_log_1] = tiro1;
        dim_log_1++;
        tiro2 = numCasualeTra(1, 6);
        player_1[dim_log_1] = tiro2;
        dim_log_1++;
        
        tiro3 = 0;
        if (tiro1 == tiro2 && tiro1 + tiro2 == 12) {
            tiro3 = numCasualeTra(1, 6);
            player_1[dim_log_1] = tiro2;
            dim_log_1++;
        } else if (tiro1 == tiro2) {
            tiro3 = 2;
        }
        
        posPlayer_1 += tiro1 + tiro2 + tiro3;
        
        if (posPlayer_1 % 7 == 0) {
            posPlayer_1 -= 3;
        }
        
        // player_2
        tiro1 = numCasualeTra(1, 6);
        player_2[dim_log_2] = tiro1;
        dim_log_2++;
        tiro2 = numCasualeTra(1, 6);
        player_2[dim_log_2] = tiro2;
        dim_log_2++;
        
        tiro3 = 0;
        if (tiro1 == tiro2 && tiro1 + tiro2 == 12) {
            tiro3 = numCasualeTra(1, 6);
            player_2[dim_log_2] = tiro2;
            dim_log_2++;
        } else if (tiro1 == tiro2) {
            tiro3 = 2;
        }
        
        posPlayer_2 += tiro1 + tiro2 + tiro3;
        
        if (posPlayer_2 % 7 == 0) {
            posPlayer_2 -= 3;
        }
        
        // player_3
        tiro1 = numCasualeTra(1, 6);
        player_3[dim_log_3] = tiro1;
        dim_log_3++;
        tiro2 = numCasualeTra(1, 6);
        player_3[dim_log_3] = tiro2;
        dim_log_3++;
        
        tiro3 = 0;
        if (tiro1 == tiro2 && tiro1 + tiro2 == 12) {
            tiro3 = numCasualeTra(1, 6);
            player_3[dim_log_3] = tiro2;
            dim_log_1++;
        } else if (tiro1 == tiro2) {
            tiro3 = 2;
        }
        
        posPlayer_3 += tiro1 + tiro2 + tiro3;
        
        if (posPlayer_3 % 7 == 0) {
            posPlayer_3 -= 3;
        }
        
        cout << "Turno: " << turno << endl;
        cout << "Player 1, posizione: " << posPlayer_1 << endl;
        cout << "Player 2, posizione: " << posPlayer_2 << endl;
        cout << "Player 3, posizione: " << posPlayer_3 << endl;
        
    } while (posPlayer_1 < posizioneFinale && posPlayer_3 < posizioneFinale && posPlayer_3 < posizioneFinale);
    
    cout << "\nHa vinto il giocatore: ";
    if (posPlayer_1 > posPlayer_2 && posPlayer_1 > posPlayer_3) {
        cout << "player_1 con " << posPlayer_1 << endl<< endl;
    } else if (posPlayer_2 > posPlayer_1 && posPlayer_2 > posPlayer_3) {
        cout << "player_2 con " << posPlayer_2 << endl<< endl;
    } else {
        cout << "player_3 con " << posPlayer_3  << endl<< endl;
    }
    
    cout << calcolaFrequenza(player_1, dim_log_1, "Player 1") << endl;
    cout << calcolaFrequenza(player_2, dim_log_2, "Player 2") << endl;
    cout << calcolaFrequenza(player_3, dim_log_3, "Player 3") << endl;
    
    return 0;
}

int numCasualeTra(int min , int max) {
    int retVal;
    retVal = rand() % (max - min + 1) + min    ;
    
    return retVal;
}

string calcolaFrequenza(int* array, int dimLog, string player) {
    string retVal;
    int freq[6];

    // azzero valori array
    for (int i = 0; i < 6; i++) {
        freq[i] = 0;
    }

    // incremento l'array frequenza ripercorrendo tutti i numeri usciti
    for (int i = 0; i < dimLog; i++) {
        freq[array[i] - 1] += 1;
    }
    
    // preparo la string di restituzione con i dati calcolati fino a qui
    retVal = "Frequenza giocatore " + player + "\n";
    for (int i = 0; i < 6; i++) {
        retVal = retVal + "Il valore " + to_string(i+1) + " e' uscito " + to_string(freq[i]) + " volte !\n";
    }
    
    return retVal;
}