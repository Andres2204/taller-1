#include<iostream>
#include<conio.h>
using namespace std;
    /* Calcular el valor total a pagar por los dos conceptos agua y energía; 
    el cobro se realiza según el siguiente plan de consumos y descuentos por es: */
float descuento(int es, float e12, float e34 ,float e56) {
    if ( es == 1 or es == 2) { return e12; }
    else if ( es == 3 or es == 4) { return e34; } 
    else if ( es == 5 or es == 6) { return e56; }
}

int main() {
    int agua, energia, es; //  Declarar varibales.
    // Pedir Datos.
    cout<<"Agua: "; cin >> agua;
    cout<<"Energia: "; cin >> energia;
    cout<<"Estracto: "; cin >> es;
    // AGUA 
    if ( agua > 0 and agua <= 2000) { agua = 35000; } 
    else if (agua > 2000) { // Calcular exedente
        agua = (((agua-2000) * 400) + 35000) * descuento(es, .90, 0.95, 1.0);
    }
    // ENEREGIA
    if ( energia > 0 and energia <= 3000) { energia = 30000; } 
    else if (energia > 3000) { // Calcular exedente
        energia = (((energia-2000) * 350) + 30000) * descuento(es, .85, 0.90, .95);
    }

    cout<<"Agua: "<< agua;
    cout<<"\nEnergia: "<< energia;

    getch();
    return 0;
}