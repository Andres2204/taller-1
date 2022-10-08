#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main() {

    int infraccion, x;
    string cobro;
    cout<<"1. Conducir en estado de Embriages."<<endl;
    cout<<"2. Pico y Placa."<<endl;
    cout<<"3. Niños menores de 10 en el asiento delantero."<<endl;
    cout<<"Tipo de infraccion: "; cin >> infraccion;

    switch (infraccion) {
        case 1: //embriages
            cout<<"Grado de Embriages:"; cin >> x;
            if ( x == 1 ) { cobro="505000 + Grua." ; break; } 
            else if ( x == 2 ) { cobro = "72000 + Grua."; break; }
            else if (x==3) { cobro = "920000 + Grua."; break; }

            break;

        case 2: //Pico y placa
            cout<<"Veces: "; cin >> x;
            if ( x >= 2 ) { cobro = to_string(280000 + (102000*x)); cobro += " + Grua"  ; break; } 
            else if ( x == 1 ) { cobro = "150000"; break; }
            else { cout<<"!"; break; }

        case 3: //Niños
            cout<<"Numero de Niños adelante: "; cin >> x;
            if ( x == 2 ) { cobro="175000"; break;} 
            else if (x == 1) {cobro = "150000"; break;}
            else {cout<<"!"; break;}

        default:
            printf("Caso Invalido. \n\n");
            main();
    }

    cout<<"Cobro: "<<cobro;
    getch();
    return 0;
}