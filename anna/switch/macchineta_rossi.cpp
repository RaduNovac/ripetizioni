#include <iostream>
#define DIM_FIS 12

// Capacità massime
#define MAG_ACQUA 1000
#define MAG_CAFFE 500
#define MAG_CIOCCOLATA 500
#define MAG_LATTE 500
#define MAG_THE 350
#define MAG_ZUCCHERO 350
#define MAG_PALETTE 300
#define MAG_BICCHIERI 500

// Dosi per bevande
#define DOSE_ACQUA_CAFFE 100
#define DOSE_ACQUA_THE 120
#define DOSE_ACQUA_CIOCCOLATA 80
#define DOSE_CAFFE 8
#define DOSE_CIOCCOLATA 25
#define DOSE_LATTE 15
#define DOSE_THE 20
#define DOSE_ZUCCHERO 12

using namespace std;

// Variabili di magazzino
int mag_acqua = 0;
int mag_caffe = 0;
int mag_the = 0;
int mag_latte = 0;
int mag_cioccolata = 0;
int mag_zucchero = 0;
int mag_palette = 0;
int mag_bicchieri = 0;

// Prototipi
void stampaMenuVettore(string*, int, bool);
void refillMacchinetta();
void stampaMagazzino();
bool preparaBevanda(int codice);

int main() {
    int dim_Log = 0;
    int dim_LogInventario = 0;
    int scelta;

    refillMacchinetta();

    string menu[DIM_FIS] = {
        "Esci",
        "Caffe' liscio",
        "Caffe' macchiato",
        "Espresso",
        "The",
        "Cioccolata",
        "Inventario"
    };
    dim_Log = 7;

    string menu_Inventario[DIM_FIS] = {
        "Torna al menu principale",
        "Mostra Magazzino",
        "Riempi Magazzino"
    };
    dim_LogInventario = 3;

    do{
        stampaMenuVettore(menu, dim_Log, true);
        cin >> scelta;

        switch (scelta) {
            case 0: // Esci
                cout << "Grazie, arrivederci!\n";
                break;
            case 1: // Caffe' liscio
            case 2: // Caffe' macchiato
            case 3: // Espresso
            case 4: // The
            case 5: // Cioccolata
                if(preparaBevanda(scelta)) {
                    cout << "\nBevanda servita con successo!\n";
                } else {
                    cout << "\nErrore: ingredienti insufficienti.\n";
                }
                break;
            case 6: // Inventario
                stampaMenuVettore(menu_Inventario, dim_LogInventario, false);
                cin >> scelta;
                switch(scelta){
                    case 0: break;
                    case 1: stampaMagazzino(); break;
                    case 2: refillMacchinetta(); break;
                    default: cout << "Scelta non valida\n"; break;
                }
                break;
            default:
                cout << "Scelta non valida [" << scelta << "]\n";
                break;
        }

    } while (scelta != 0);

    return 0;
}

void stampaMenuVettore(string *menu, int dimLog, bool saluta) {
    if (saluta) {
        cout << "\n=== Menu Bevande ===\n";
        cout << "Cosa desideri?\n";
    } else {
        cout << "\n=== Menu Inventario ===\n";
    }

    for (int i = 0; i < dimLog; i++) {
        cout << "\t" << i << ". " << menu[i] << endl;
    }
}

void refillMacchinetta() {
    mag_acqua = MAG_ACQUA;
    mag_caffe = MAG_CAFFE;
    mag_the = MAG_THE;
    mag_latte = MAG_LATTE;
    mag_cioccolata = MAG_CIOCCOLATA;
    mag_zucchero = MAG_ZUCCHERO;
    mag_palette = MAG_PALETTE;
    mag_bicchieri = MAG_BICCHIERI;

    cout << "\nTutti i magazzini sono stati riempiti.\n\n";
}

void stampaMagazzino() {
    cout << "\n--- Stato Magazzino ---\n";
    cout << "Acqua:      " << mag_acqua << endl;
    cout << "Caffe':     " << mag_caffe << endl;
    cout << "Latte:      " << mag_latte << endl;
    cout << "The:        " << mag_the << endl;
    cout << "Cioccolata: " << mag_cioccolata << endl;
    cout << "Zucchero:   " << mag_zucchero << endl;
    cout << "Palette:    " << mag_palette << endl;
    cout << "Bicchieri:  " << mag_bicchieri << endl;
}

// Funzione per preparare una bevanda
bool preparaBevanda(int codice) {
    // Controllo ingredienti in base al codice
    switch(codice){
        case 1: // Caffè liscio
            if (mag_acqua >= DOSE_ACQUA_CAFFE &&
                mag_caffe >= DOSE_CAFFE &&
                mag_zucchero >= DOSE_ZUCCHERO &&
                mag_bicchieri > 0 &&
                mag_palette > 0){
                
                mag_acqua -= DOSE_ACQUA_CAFFE;
                mag_caffe -= DOSE_CAFFE;
                mag_zucchero -= DOSE_ZUCCHERO;
                mag_bicchieri--;
                mag_palette--;
                return true;
            }
            break;
        case 2: // Caffè macchiato
            if (mag_acqua >= DOSE_ACQUA_CAFFE &&
                mag_caffe >= DOSE_CAFFE &&
                mag_latte >= DOSE_LATTE &&
                mag_zucchero >= DOSE_ZUCCHERO &&
                mag_bicchieri > 0 &&
                mag_palette > 0) {
                
                mag_acqua -= DOSE_ACQUA_CAFFE;
                mag_caffe -= DOSE_CAFFE;
                mag_latte -= DOSE_LATTE;
                mag_zucchero -= DOSE_ZUCCHERO;
                mag_bicchieri--;
                mag_palette--;
                return true;
            }
            break;
        case 3: // Espresso (meno acqua)
            if (mag_acqua >= 50 &&
                mag_caffe >= DOSE_CAFFE &&
                mag_zucchero >= DOSE_ZUCCHERO &&
                mag_bicchieri > 0 &&
                mag_palette > 0) {
                
                mag_acqua -= 50;
                mag_caffe -= DOSE_CAFFE;
                mag_zucchero -= DOSE_ZUCCHERO;
                mag_bicchieri--;
                mag_palette--;
                return true;
            }
            break;
        case 4: // The
            if (mag_acqua >= DOSE_ACQUA_THE &&
                mag_the >= DOSE_THE &&
                mag_zucchero >= DOSE_ZUCCHERO &&
                mag_bicchieri > 0 &&
                mag_palette > 0) {
                
                mag_acqua -= DOSE_ACQUA_THE;
                mag_the -= DOSE_THE;
                mag_zucchero -= DOSE_ZUCCHERO;
                mag_bicchieri--;
                mag_palette--;
                return true;
            }
            break;
        case 5: // Cioccolata
            if (mag_acqua >= DOSE_ACQUA_CIOCCOLATA &&
                mag_cioccolata >= DOSE_CIOCCOLATA &&
                mag_latte >= DOSE_LATTE &&
                mag_zucchero >= DOSE_ZUCCHERO &&
                mag_bicchieri > 0 &&
                mag_palette > 0) {
                
                mag_acqua -= DOSE_ACQUA_CIOCCOLATA;
                mag_cioccolata -= DOSE_CIOCCOLATA;
                mag_latte -= DOSE_LATTE;
                mag_zucchero -= DOSE_ZUCCHERO;
                mag_bicchieri--;
                mag_palette--;
                return true;
            }
            break;
    }
    return false;
}
