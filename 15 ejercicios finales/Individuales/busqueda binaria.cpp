#include "iostream";
using namespace std;

/*
Buscar un numero dado, en un vector que contiene numero del 1 al 100
Usar busqueda binaria para encontrarlo

Para que esto funcione, deber ser un vector numerico, ordenado
de menor a mayor
*/

void llenar(int longitud, int *vector) {
    vector[1] = 23;
}

int main() {
    int numero;
    cout<<"Numero a buscar [1-100]: "; cin >> numero;

    int longitud=100, final=longitud-1, mitad, puntero = 0;
    int vector[longitud];
    bool hallado=false;

    llenar(longitud, vector);

    cout<<vector[1];
    // Llenar el vector hasta longitud.
    for (int i = 0; i<longitud;i++) { vector[i] = i+1; }

    /*
    Mostrar el vector
    for (int element : vector) {
        cout<<"Numeros: "<<element<<endl;
    }
    */

    while (!hallado && puntero <= final ) {
        // Hallar la mitad del vector
        mitad = ((puntero + final ) / 2);

        if (numero == vector[mitad]) { hallado = true; } //Se encontro le numero
        else if (numero < vector[mitad]) { final = mitad-1; } //la mitad es mayor que el numero
        else { puntero = mitad + 1; } // la mitad es menor que el numero
    }

    if (hallado) { //Si hallado es verdadero
        cout<<"-> Numero encontrado en la posicion "<<mitad+1<<endl;
    } else { // De lo contrario
        cout<<"-> No se encontro el numero"<<endl;
    }
}