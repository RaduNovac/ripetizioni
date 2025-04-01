#include <iostream>
using namespace std;

/*Creare un programma che fa inserire all’utente tre caratteri
e usando una funzione verifica e stampa quanti di questi sono lettere maiuscole..*/

int verificaLettere(char carattere1, char carattere2, char carattere3){
    int contatorelettere=0;
    
    if(carattere1 >= 'A' && carattere1 <= 'Z'){
        contatorelettere++;
    }
    
    if(carattere2 >= 'A' && carattere2 <= 'Z'){
        contatorelettere++;
    }
    
    if(carattere3 >= 'A' && carattere3 <= 'Z'){
        contatorelettere++;
    }
    
    return contatorelettere;
}

int main(){
    
    char carattere1, carattere2, carattere3;
    
    cout<<"inserisci 1 carattere"<<endl;
    cin>>carattere1;
    
    cout<<"inserisci 1 carattere"<<endl;
    cin>>carattere2;
    
    cout<<"inserisci 1 carattere"<<endl;
    cin>>carattere3;
    
    cout<<"le lettere maiuscole sono: " << verificaLettere(carattere1,carattere2,carattere3) << endl;

    return 0;
}