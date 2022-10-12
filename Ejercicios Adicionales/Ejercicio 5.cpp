#include<iostream>
using namespace std;

/*

Para tributar un determinado impuesto se debe ser mayor de 16 años y tener
unos ingresos iguales o superiores a 1000 € mensuales. Escribir un programa
que pregunte al usuario su edad y sus ingresos mensuales y muestre por 
si el usuario tiene que tributar o no.

*/
int main() {

    int edad;
    float ingresos;

    cout<<"Edad: "; cin >> edad;
    cout<<"Ingresos: "; cin >> ingresos;

    if (edad >= 16 && ingresos>= 1000) {
        cout<<"Usted Tiene que tributar."<<endl;
    } else {
        cout<<"Aun no debe tributar."<<endl;
    }

    system("pause");
    return 0;
}