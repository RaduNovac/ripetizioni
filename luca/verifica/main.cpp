#include <stdio.h>
#include <iostream>
#define DIMFIS 120

using namespace std;

int dadiCas(int*);
int avanzamentoPos(int, int);


int main(){
    
    int  dado1, dado2, punteggio, vettore[6], giocatore1[0], giocatore2[0], giocatore3[0], num_lanci, dim_log=0, i;
    
    
    cout<<"il giocatore 1 tira: "<<dadiCas(vettore)<<endl;
    
    
    do{
        avanzamentoPos(punteggio, dim_log);
    }
    while(giocatore1[i]<DIMFIS);
    
    cout<<giocatore1[i]<<endl;
   
    return 0;
}

int dadiCas(int* vettore){
    
    int num_max = 6, num_min = 1, punteggio;
    
    srand(time(0));
    
    int dado1 = rand() % (num_max - num_min + 1) - num_min;
    int dado2 = rand() % (num_max - num_min + 1) - num_min;
    
    punteggio = dado1 + dado2;
    int num_lanci= num_lanci+2;
    
    do{
        punteggio=punteggio+2;
    }
    while(dado1!=dado2 || punteggio ==12);
    
    if(punteggio=12){
        srand(time(0));
    
        int dado3 = rand() % (num_max - num_min + 1) - num_min;
        
        punteggio=punteggio+dado3;
        
        num_lanci++;
        
    }
    
    cout<<punteggio<<endl;
    
    
    return punteggio;
}

int avanzamentoPos(int punteggio, int dim_log){
    
    int giocatore1[0],i;
    
    for(int i; i<dim_log; i++){
        giocatore1[i]=giocatore1[i+punteggio];
        
    }
    return giocatore1[i];
}