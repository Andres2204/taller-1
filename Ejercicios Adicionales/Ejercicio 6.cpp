#include<iostream>
using namespace std;

/*

Los alumnos de un curso se han dividido en dos grupos A y B de acuerdo al
sexo y el nombre. El grupo A esta formado por las mujeres con un nombre
anterior a la M y los hombres con un nombre posterior a la N y el grupo B por
el resto. Escribir un programa que pregunte al usuario su nombre y sexo, y muestre
por pantalla el grupo que le corresponde.

*/
int main() {
    string nombre, genero, grupo;
    cout<<"ingrese su Nombre: "; cin >> nombre;
    cout<<"Ingrese su Genero [<M>masculino , <F>femenino]"; cin >> genero;
    if ((genero == "F" && tolower(nombre[0]) < 'm') || (genero == "M" && tolower(nombre[0]) > 'n')){
        grupo = "A";
    } else {
        grupo = "B";
    }
    cout<<"Tu grupo es "<<grupo<<endl;

    system("pause");
    return 0;
}