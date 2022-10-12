#include<iostream>
using namespace std;

/* 

Escribir un programa que pregunte al usuario su edad y muestre por 
pantalla si es mayor de edad o no.

*/
int main() {

    int edad;
    cout<<"Ingrese su edad: "; cin >> edad; 

    if (edad>=18) {
        cout<<"Es mayor de edad"<<endl;
    } else if (edad < 0) {
        cout<<"Como que tienes "<<edad<<" años?"<<endl;
    } else {
        cout<<"Es menor de edad"<<endl;
    }

    system("pause");
    return 0;
}
