#include "iostream"
#include "string"

/*

Un peaje desea implementar un programa que permita determinar en cualquier día de la semana lo siguiente:   
-Total de vehículos particulares y total de vehículos públicos que cruzan el  
peaje.  
-Total de hombres y total de mujeres en vehículos particulares.  
-Total de hombres y total de mujeres en vehículos públicos. 
Realizar prueba escritorio. 

*/

using namespace std;
void menu() { 
    cout<<"\n1. Particular. \n"
        <<"2. Publico. \n"
        <<"Ingrese tipo de vehiculo: ";
}

void personasVehiculo(int personas, int *hombres, int *mujeres ) {
    int i; // variables locales
    string genero;
    for (i=0; i<personas; i++){
        cout<<"Genero <H>ombre <M>ujer: "; cin >> genero;
        if (tolower(genero[0])==tolower("H"[0])) { 
            *hombres+=1;
        } else if (tolower(genero[0])==tolower("M"[0])) {
            *mujeres+=1;
        } else { cout<<"Dato incorrecto, intente de nuevo."<<endl; i--; } // repetir 
    }
}


int main() {
    int tipoVehiculo, particulares=0, publicos=0, vehiculos; // Datos de vehiculos
    int partHombre=0, partMujer=0, publicHombre=0, publicMujer=0, personas; // Contadores de personas

    cout<<"Cantidad de vehiculos: "; cin >> vehiculos;

    int i; // iterador
    for(i = 0; i<vehiculos;i++){
        menu(); cin >> tipoVehiculo;
        cout<<"personas en el vehiculo: "; cin >> personas;
        if (tipoVehiculo==1){
            particulares++;
            personasVehiculo(personas, &partHombre, &partMujer);

        } else if (tipoVehiculo == 2) {
            publicos++;
            personasVehiculo(personas, &publicHombre, &publicMujer);

        } else { cout<<"Dato incorrecto. "; i--;}
    }

    cout<<"Vehiculos particulares: \n"
        <<"Hombres: "<<partHombre<<endl
        <<"Mujeres: "<<partMujer<<endl;

    cout<<"Vehiculos publicos: \n"
        <<"Hombres: "<<publicHombre<<endl
        <<"Mujeres: "<<publicMujer<<endl;


    return 0;
}