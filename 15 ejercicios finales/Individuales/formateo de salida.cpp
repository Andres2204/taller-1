#include "iostream"
using namespace std;

/*
Tomar los elementos de una lista, y mostrarlos por pantalla
con el siguiente formato: [a,b,c,d]
*/

void formato(int longitud,int array[]) {
    //Formato
    for (int i = 0; i<longitud; i++) {
        if (i==0) { // primera iteracion
            cout<<"["<<array[i];
            continue;
        } if (i==longitud-1) { // ultima iteracion
            cout<<array[i]<<"]"<<endl;
        } else {
            cout<<", "<<array[i]<<", ";
        }
    }
}


int main() {
    // inicializaciones
    int longitud;
    cout<<"longitud del array: "; cin>>longitud;
    int array[longitud];

    // Llenar el array
    for (int i = 0; i<longitud; i++) {
        cout<<"elemento "<<i+1<<" del array: "; cin >> array[i];
    }

    formato(longitud,array);
}