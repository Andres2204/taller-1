#include<iostream>
using namespace std;

/*

En una determinada empresa, sus empleados son evaluados al final de cada año.
Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando,
traduciéndose en mejores beneficios. Los puntos que pueden conseguir los
empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios entre
las cifras mencionadas. A continuación se muestra una tabla con los niveles
correspondientes a cada puntuación. La cantidad de dinero conseguida en cada nivel
es de 2.400€ multiplicada por la puntuación del nivel.

Nivel	     |Puntuación
-------------------------
Inaceptable	 |  0.0
Aceptable	 |  0.4
Meritorio	 |  0.6 o más

Escribir un programa que lea la puntuación
del usuario e indique su nivel de rendimiento,
así como la cantidad de dinero que recibirá el usuario.

*/
int main() {
    int bonificacion = 2400;
    // Se que se pueden declarar la varibales
    // de corrido, pero asi quedan mas claras.
    float 
        puntuacionFinal,
        inaceptable = 0.0,
        aceptable = 0.4,
        meritorio = 0.6;

    string nivel;
    
    cout<<"Niveles: "<<endl
        <<"inaceptable = 0.0"<<endl
        <<"aceptable = 0.4,"<<endl
        <<"Meritorio = 0.6 o mas"<<endl;

    cout<<"Ingrese su puntuacion final: "; cin >> puntuacionFinal;
    if (puntuacionFinal == inaceptable) { nivel = "inaceptable"; } 
    else if (puntuacionFinal == aceptable) { nivel = "aceptable";} 
    else if (puntuacionFinal >= meritorio) { nivel = "meritorio";} 
    else {cout<<"Puntuacion invalida. \n\n"; main();}

    cout<<"Tu nivel de rendimiento ha sido "<<nivel<<endl
        <<"Se te dara "<<puntuacionFinal*bonificacion<<" euros"<<endl;
    system("pause");
    return 0;
}