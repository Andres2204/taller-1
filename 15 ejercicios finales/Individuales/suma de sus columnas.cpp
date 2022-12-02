#include "iostream"
using namespace std;

/*
crear una matriz la cual el ultimo elemento de sus fila y columnas, sea la suma de los anteriores
*/

int main() {
    // Inicializaciones
    int columnas, filas, suma=0;
    cout<<"Numero de filas y columnas: "; cin >> filas;
    columnas = filas;
    
    if (filas<2) {
        cout<<"Las filas deben ser mayor a 2"<<endl; main();
    }    
    
    int matriz[filas][columnas];

    cout<<filas<<columnas;

    //llenar la matriz con 0
    for(int f = 0; f<filas; f++) {
        for(int c = 0; c<columnas; c++){     
            matriz[c][f]=0;
        }
    }

    cout<<endl<<"---------------------"<<endl;
    cout<<"Llenar matriz"<<endl;
    
    // llenar todo exepto la ultima fila
    for(int c = 0; c<columnas; c++) {
        for(int f = 0; f<filas-1; f++){     
            cout<<f<<" : "<<c<<" > "; cin >> matriz[c][f];
        }
    }

    /*
        // mostrar matriz para debug
    for(int c = 0; c<columnas; c++) {
        for(int f = 0; f<filas; f++){      
                cout<<matriz[f][c]<<" |";
        }
        cout<<endl;
    }
    */

    cout<<endl<<"---------------------"<<endl;
    cout<<"Sumas: "<<endl;
    //Sumar
    for(int c = 0; c<columnas; c++) {
        for(int f = 0; f<filas; f++){
                //invertir filas y columas para "ladear la tabla y sumar"
                if (f==filas-1) {
                    matriz[c][f] = suma;
                    cout<<"="<<suma;
                    // fila, columna
                } else {
                    suma+=matriz[c][f];
                    cout<<"+"<<matriz[c][f];
                    
                }              
        }
        cout<<endl;
        suma=0;
    }

    cout<<endl;

    cout<<endl<<"---------------------"<<endl;


    // mostrar matriz
    for(int c = 0; c<columnas; c++) {
        for(int f = 0; f<filas; f++){      
                cout<<matriz[f][c]<<" |";
        }
        cout<<endl;
    }
    return 0;
}

// Por alguna razon se bugea cuando no son matricez con filas y columnas iguales.