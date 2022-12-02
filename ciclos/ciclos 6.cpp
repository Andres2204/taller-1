#include "iostream"
#include "vector"
using namespace std;

int main() {
    //declaracion de variables
    int piso=1,apmto=1,totalPisos=2, totalApmtos=1;
    
    // datos de Personas por aparatamento
    int personasApmto, edad; 
    string genero;
    float aguaApmto=0; // agua consumida en el apartmento

    // Datos de metricas
    int promedioEdad, totalPersonas=0;
    int hombresPiso;
    float mayorAgua=0;
    vector<int> totalHombresPiso;

    do {
        while (apmto<=totalApmtos) {
            cout<<"[--- piso: "<<piso<<" Apartamento: "<<apmto<<"---]"<<endl;
            cout<<"Cuantas personas hay en este apartamento: "; cin >> personasApmto;
            if (personasApmto <= 0) {apmto++;continue;} // siguente apartamento, si este esta vacio
            
            // Encontrar el mayor consumo de litros de agua
            cout<<"Litros de agua consumidos: "; cin >> aguaApmto;
            if (aguaApmto>mayorAgua) {mayorAgua = aguaApmto;}
            totalPersonas+=personasApmto;

            // Datos para cada persona
            for (int i = 0; i < personasApmto; i++) { 
                getchar();
                cout<<"Genero [<h>ombre,<m>ujer]: "; getline(cin, genero);
                cout<<"Edad: "; cin >> edad;

                if (genero=="h"){hombresPiso+=1;}
                else if (genero=="q") {break;} // salir

            }
            
            apmto++;
        }
        // Reestablecer variables para el siguiente piso
        apmto=1;
        totalHombresPiso.push_back(hombresPiso); //Añadir numero de Hombres, para despues mostrarlos por piso.

        hombresPiso=0;
        piso++;
        cout<<"\n";
    } while (piso<=totalPisos);

    //Mostrar total de hombres por piso
    for(int i=0; i < totalHombresPiso.size(); i++) {   
        cout <<"En el piso "<<i+1<<" hay "<<totalHombresPiso[i]<<" hombres"<<endl;
    }
    cout<<"El mayor consumo de agua fue: "<<mayorAgua<<endl;;


    

    return 0;
}