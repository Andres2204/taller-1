#include<iostream>
using namespace std;

/*
La pizzería Bella Napoli ofrece pizzas vegetarianas y no
vegetarianas a sus clientes. Los ingredientes para cada tipo
de pizza aparecen a continuación.

Ingredientes vegetarianos: Pimiento y tofu.
Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.

Escribir un programa que pregunte al usuario si quiere
una pizza vegetariana o no, y en función de su respuesta
le muestre un menú con los ingredientes disponibles para que 
elija. Solo se puede eligir un ingrediente además de la mozzarella y 
el tomate que están en todas la pizzas.
  
Al final se debe mostrar por pantalla si la pizza 
elegida es vegetariana o no y todos los ingredientes que lleva.
*/
// No hay funcion que por defecto en c++, que pase un string completo a minusculas
// Por lo tanto, hay que hacerla.
string minusculas(string cadena){  // recivir la cadena
    for(int i = 0; i < cadena.size(); i++) { // Iterar un numero 
        cadena[i] = tolower(cadena[i]); // Convertir a minuscula el caracter
    } return cadena; // Devolver la cadena en minuscula
}

bool ingrad(string ingrediente) { 
    // Ingrediente NO vegetariano
    if (ingrediente == "peperoni" || ingrediente == "jamon" || ingrediente ==  "salmon") {
        return false; // Devolver "Es no vegetariano" 

    // Ingrediente Vegetariano
    } else if (ingrediente =="Pimiento" || ingrediente == "tofu") {
        return true; // Devolver "Es vegetariano" 

    // Ingrediente invalido
    } else {
        cout<<"Ingrediente desconocido";
    }
}

int main() {
    int tipo;
    string ingrediente;
    bool Veg; // Veg = VEGETARIANA
    cout<<"Tipos de pizza"<<endl
	    <<"\t1- Vegetariana"<<endl
	    <<"\t2- No vegetariana"<<endl
        <<"Tipo: "; cin >> tipo;

    switch (tipo) {
        case 1: // Vegetariana
        // Mostrar lista de ingredientes vegetarianos
            cout<<"Ingredientes de pizzas vegetarianas\n\t - Pimiento\n\t- Tofu\n";
            cout<<"Que ingrediente adicional quieres? : "; cin >> ingrediente;
            Veg = ingrad(minusculas(ingrediente)); break;// Verificar si el ingrediente es vegetariano

        case 2: // No Vegetariana
        // Mostrar lista de ingredientes no vegetarianos
            cout<<"Ingredientes de pizzas no vegetarianas\n\t- Peperoni\n\t- Jamon\n\t- Salmon\n";
            cout<<"Que ingrediente adicional quieres? : "; cin >> ingrediente;
            Veg = ingrad(minusculas(ingrediente)); break; // Verificar si el ingrediente es vegetariano
        
        default: cout<<"Tipo invalido. "; main();
    }

    if (tipo == 1 and Veg == true) { // Tipo de pizza e ingrediente Vegetarianos
        cout<<"Pizza vegetariana con mozzarella, tomate y "<<minusculas(ingrediente)<<endl;
    } else if (tipo == 2 and Veg == false) { // Tipo de pizza e ingrediente NO Vegetarianos
        cout<<"Pizza no vegetariana con mozzarella, tomate y "<<minusculas(ingrediente)<<endl;
    }else { // Tipos Distintos
        cout<<"El Ingrediente no coincide con el tipo de pizza"<<endl;
    }
    system("pause");
    return 0;
}

// SE PIDE EL TIPO DE PIZA Y LUEGO EL INGREDIENTE EXTRA, SI ESE NO CONCUERDA CON LA PIZA ESCOGIDA
// SE LE AVISA AL USUSARIO