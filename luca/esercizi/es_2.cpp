#include <iostream>
using namespace std;

/*Creare una funzione che riceve una quantità di tempo in formato ore, minuti e secondi e la restituisce espressa 
solamente in secondi.
Creare poi un programma che si faccia passare due quantità di tempo e
verifichi quale è maggiore utilizzando la funzione precedente e solamente due if nel programma.*/

int convertitoreOre(int ore, int minuti, int secondi){
    
    ore=ore*3600;
    minuti=minuti*60;
    secondi=secondi*1;
    
    
    return ore,minuti,secondi;
}

int main(){
    
    int ore, minuti, secondi;
    
    cout<<"inserisci un orario in ore, minuti e secondi: "<<endl;
    cin>>ore, minuti, secondi;
    
    convertitoreOre(ore,minuti,secondi);
    cout<<"i secondi totali sono: "<<convertitoreOre;
    
  
    return 0;
}