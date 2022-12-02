#include "iostream"
#include "vector"
#include "algorithm"
/*

La facultad de ingenierías ha efectuado una prueba de admisión a un grupo
de N de estudiantes y requiere que usted
elabore un programa que obtenga los siguientes resultados:
-Nombre de los 3 estudiantes con los puntajes más bajos. 
-Puntaje máximo obtenido. 

*/
using namespace std;

//variables globales
string nombre, nombres[3];
float puntaje, mayorPuntaje = 0;
vector<float> puntajes;

//string nombre, string nombres[3], float puntaje, float mayorPuntaje, vector<float> puntajes
void sacarPuntajes() {
    // --- CALCULO Y ORDENAMIENTO DE PUNTAJES ---
    puntajes.push_back(puntaje);
    sort(puntajes.begin(), puntajes.end(), greater<int>()); // ordenar de mayor a menor

        // nombre segun posicion de puntaje
    if (puntaje == puntajes[puntajes.size()-1]) { //si el puntaje es el mas bajo de todos
        nombres[2] = nombres[1];// mover 2do nombre al 3er opuesto
        nombres[1] = nombres[0]; // mover primer nombre a 2do puesto
        nombres[0] = nombre; // reemplazar primer nombre
    } else if (puntaje == puntajes[puntajes.size()-2]) { // si el puntaje es el segundo mas bajo
        nombres[2] = nombres[1]; // mover 2do nombre al 3er puesto
        nombres[1] = nombre; // reemplazar 2do nombre
    } else if (puntaje == puntajes[puntajes.size()-3]) { // si el puntaje es el tercero mas bajo
        nombres[2] = nombre; // reemplazar tercer nombre
    }

        // puntajes mayor
    if (puntaje > mayorPuntaje) {
        mayorPuntaje = puntaje;
    }
}


int main () {
    int estudiantes; // variable local
    cout<<"Numero de estudiantes: "; cin >> estudiantes;

    for (int i = 0; i<estudiantes; i++) {
        cout<<"Nombre del estudiante: "; cin >> nombre;
        cout<<"Puntaje: "; cin >> puntaje;

        //nombre,nombres,puntaje,mayorPuntaje, puntajes
        sacarPuntajes();
        
        
    }

    cout<<"El mayor puntaje ha sido de: "<<mayorPuntaje<<endl;
    cout<<"primer puntajes mas bajo: "<<puntajes[puntajes.size()-1]<<" de " << nombres[0]<<endl;
    cout<<"segundo puntajes mas bajo: "<<puntajes[puntajes.size()-2]<<" de " << nombres[1]<<endl;
    cout<<"tercer puntajes mas bajo: "<<puntajes[puntajes.size()-3]<<" de " << nombres[2]<<endl;

    return 0;
}