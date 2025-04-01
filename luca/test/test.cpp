#include <iostream>

#define quantita 4

using namespace std;

int votiCasuali(int max, int min){
    
    int num_cas = rand() % (30 - 18 + 1) + 18;
    return num_cas;
}


int mediaVoti(int somma, int quantita){
    
    int media = somma/quantita;
    
    return media;
}

/*int frequenzaVoti(int cont_frequenza){
    
    if(votiCasuali(30, 18)==votiCasuali(30, 18)){
        cont_frequenza++;
    }
    
    return cont_frequenza;
}*/

bool num_max_min(int max, int min){
    
    if(max>min){
        return true;
    }
    
    return false;
}


int main(){
    
    int vettore1[quantita], vettore2[quantita], vettore3[quantita], somma=0, media, cont_frequenza;
    
    srand(time(0));
    
    for(int i=0; i<4; i++){
        int num=votiCasuali(30 , 18);
        vettore1[i]=num;
        cout<<vettore1[i]<<" ";
        somma = somma+num;
    }
    
    cout<<endl<<"la media devi voti e: "<<mediaVoti(somma, quantita)<<endl;

    cout<<"la frequenza dei voti e: "<<frequenzaVoti(cont_frequenza)<<endl;
    
    if(num_max_min(max, min)==true){
        cout<<"il numero massimo e: "<<max<<endl;
    }
    else{
        cout<<"il numero minimo e: "<<min<<endl;
    }
    
	return 0;
}