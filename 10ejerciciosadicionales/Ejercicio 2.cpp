#include<iostream>
using namespace std;

/*

Escribir un programa que almacene la cadena de 
caracteres contraseña en una variable, pregunte al usuario por la 
contraseña e imprima por pantalla si la contraseña introducida por el 
usuario coincide con la guardada en la variable sin tener en cuenta 
mayúsculas y minúsculas.

*/
// No hay funcion que por defecto en c++, que pase un string completo a minusculas
// Por lo tanto, hay que hacerla.
string minusculas(string cadena){ 
    for(int i = 0; i < cadena.size(); i++) {
        cadena[i] = tolower(cadena[i]);
    }
    return cadena;
}

int main() {
    string password, intento;
    cout<<"Ingrese una contrasena: "; cin >> password;
    password = minusculas(password);

    cout<<"Repita la contrasena: "; cin >> intento;

    // Se puede borrar lo escrito anterior mente con system("cls");
    if (password == minusculas(intento)) {
        cout<<"Las Contrasenas coinciden!"<<endl;
    } else { cout<<"Contranas Diferentes."<<endl;}
    
    system("pause");
    return 0;
}