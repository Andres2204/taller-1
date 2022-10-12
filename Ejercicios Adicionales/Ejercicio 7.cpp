#include<iostream>
using namespace std;

/*

Los tramos impositivos para la declaración de la 
renta en un determinado país son los siguientes:

Renta	               |Tipo impositivo
----------------------------------------
Menos de 10000€	       |    5%
Entre 10000€ y 20000€  |    15%
Entre 20000€ y 35000€  |    20%
Entre 35000€ y 60000€  |    30%
Más de 60000€	       |    45%

Escribir un programa que pregunte al usuario su renta anual y 
muestre por pantalla el tipo impositivo que le corresponde.

*/
int main() {

    float renta,impositivo;
    cout<<"Renta: "; cin >> renta;

    switch (int(renta)) {
        case 0 ... 9999: impositivo = .95; break;
        case 10000 ... 19999: impositivo = .85; break;
        case 20000 ... 34999: impositivo = .80; break;
        case 35000 ... 60000: impositivo = .70; break;
        default:break;
    }
    cout<<"Tienes que pagar "<<renta*impositivo<<" euros"<<endl;
    system("pause");
    return 0;
}