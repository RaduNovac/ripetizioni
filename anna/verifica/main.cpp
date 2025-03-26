#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()
/*
La consegna è confusionaria a dir poco...
*/
using namespace std;

//Prototipi funzioni, servono? Non mi sembra ci sia nella consegna, nel dubbio li metto
int numero_random();
void frequenza_numeri(int v[]);

int main(){
    // valore del seed
	srand(time(0));

    /*
    Punto 1: vettori per tenere traccia dei lanci effettuati da ciascun giocatore e 
    della posizione, hanno 6 caselle, una per ciascun valore
    */
    int lanci_p1[6] = {0}, lanci_p2[6] = {0}, lanci_p3[6] = {0};

    //Posizioni giocatori, all'inizio partoto tutti dalla posizione 1
    int posizione_p1 = 1, posizione_p2 = 1, posizione_p3 = 1;

    //Variabili per l'estrazione dei dadi e relativa somma
    int dado_1 = 0, dado_2 = 0, somma = 0;

    //Variabile per fermare il gioco non appena un giocatore arriva a 120
    bool continuare = true;

    /*
    Ciclo che fa le estrazioni per ciascun giocatore fino a quando 
    uno dei 3 giocatori non arriva alla posizione 120
    */
    while(continuare){
        //Estrazione giocatore 1
        dado_1 = numero_random();
        dado_2 = numero_random();

        //Registro i numeri estratti
        lanci_p1[dado_1 - 1]++;
        lanci_p1[dado_2 - 1]++;

        somma = dado_1 + dado_2;

        //Check bonus
        if(dado_1 == dado_2 && (dado_1 + dado_2) == 12){//Caso somma 12, cioè 6 + 6
            dado_1 = numero_random();
            lanci_p1[dado_1 - 1]++;
            somma += dado_1;
        }
        else if(dado_1 == dado_2){//Caso dadi di valore uguale, qualsiasi valore da 1 a 6
            somma += 2;
        }

        //Aggiornamento posizione giocatore
        posizione_p1 += somma;

        //Verifico se ha superato la posizione 120 e in caso decreto il vincitore
        if(posizione_p1 >= 120){
            continuare = false;
            cout << "\nIl vincitore è il giocatore 1!\n";
        }

        //Check posizione divisibile per 7
        if(posizione_p1 % 7 == 0){
            posizione_p1 -= 3;
        }

        //Reset somma per giocatore successivo
        somma = 0;

        //Estrazione giocatore 2
        dado_1 = numero_random();
        dado_2 = numero_random();

        //Registro i numeri estratti
        lanci_p2[dado_1 - 1]++;
        lanci_p2[dado_2 - 1]++;

        somma = dado_1 + dado_2;

        //Check bonus
        if(dado_1 == dado_2 && (dado_1 + dado_2) == 12){//Caso somma 12, cioè 6 + 6
            dado_1 = numero_random();
            lanci_p2[dado_1 - 1]++;
            somma += dado_1;
        }
        else if(dado_1 == dado_2){//Caso dadi di valore uguale, qualsiasi valore da 1 a 6
            somma += 2;
        }

        //Aggiornamento posizione giocatore
        posizione_p2 += somma;

        //Verifico se ha superato la posizione 120 e in caso decreto il vincitore
        if(posizione_p2 >= 120){
            continuare = false;
            cout << "\nIl vincitore è il giocatore 2!\n";
        }

        //Check posizione divisibile per 7
        if(posizione_p2 % 7 == 0){
            posizione_p2 -= 3;
        }

        //Reset somma per giocatore successivo
        somma = 0;
        
        //Estrazione giocatore 3
        dado_1 = numero_random();
        dado_2 = numero_random();

        //Registro i numeri estratti
        lanci_p3[dado_1 - 1]++;
        lanci_p3[dado_2 - 1]++;

        somma = dado_1 + dado_2;

        //Check bonus
        if(dado_1 == dado_2 && (dado_1 + dado_2) == 12){//Caso somma 12, cioè 6 + 6
            dado_1 = numero_random();
            lanci_p3[dado_1 - 1]++;
            somma += dado_1;
        }
        else if(dado_1 == dado_2){//Caso dadi di valore uguale, qualsiasi valore da 1 a 6
            somma += 2;
        }

        //Aggiornamento posizione giocatore
        posizione_p3 += somma;

        //Verifico se ha superato la posizione 120 e in caso decreto il vincitore
        if(posizione_p3 >= 120){
            continuare = false;
            cout << "\nIl vincitore è il giocatore 3!\n";
        }

        //Check posizione divisibile per 7
        if(posizione_p3 % 7 == 0){
            posizione_p3 -= 3;
        }

        //Reset somma per giocatore successivo
        somma = 0;

        //Stampa posizione di ciascun giocatore a fine turno
        cout << "Posizione giocatore 1: " << posizione_p1 << endl;
        cout << "Posizione giocatore 2: " << posizione_p2 << endl;
        cout << "Posizione giocatore 3: " << posizione_p3 << endl << endl;
    }

    //Frequenze di lancio per ciascun giocatore
    cout << "Frequenze giocatore 1:\n";
    frequenza_numeri(lanci_p1);

    cout << "Frequenze giocatore 2:\n";
    frequenza_numeri(lanci_p2);

    cout << "Frequenze giocatore 3:\n";
    frequenza_numeri(lanci_p3);
	
	return 0;
}
//Punto 2: funzione per la generazione dei numeri random
int numero_random(){
    int num_cas = rand() % (6 - 1 + 1) + 1;//(max - min + 1) + min

    return num_cas;
}

/*
Punto 3: funzione per la frequenza dei numeri da 1 a 6 in un vettore
Siccome la funzione deve determinare la frequenza dei numeri da 1 a 6
in un vettore e la consegna dice alla regola d di elencare per ciascun
giocatore la frequenza dei lanci, semplicemente scorro l'array ed elenco
*/
void frequenza_numeri(int v[]){
    for(int i = 0; i < 6; i++){//
        cout << "Il numero " << i + 1 << " e' uscito " << v[i] << " volte.\n";
    }
}
