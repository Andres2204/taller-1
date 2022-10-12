#include<iostream>
using namespace std;

/*

Escribir un programa que pida al usuario dos números y muestre por pantalla su división. 
Si el divisor es cero el programa debe mostrar un error.

*/
int main() {
    int dividiendo, divisor;
    cout<<"Ingrese un dividiendo: "; cin >> dividiendo;
    cout<<"Ingrese el divisor: "; cin >> divisor;

    if (divisor != 0) {
        cout<<"El resultado es: "<<dividiendo/divisor<<endl;
    } else {
        cout<<"Error: No de puede divir por 0."<<endl;
    }

    system("pause");
    return 0;
}