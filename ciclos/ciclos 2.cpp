#include "iostream"
using namespace std;
int main () {
    int i=1, stud, p=0;
    float n1,n2,n3, nf,pg=0, notaMayor=0;
    cout<<"Numero de stud: "; cin >> stud;
    while (i<=stud) {
        // Pedir notas
        cout<<"Nota 1: "; cin >> n1;
        cout<<"Nota 2: "; cin >> n2;
        cout<<"Nota 3: "; cin >> n3;

        // Calcular nota final
        nf = (n1+n2+n3)/3;
        cout<<"NOTA fINAL: "<<nf<<endl; // Mostrar nota final

        // SEPARAR A LOS PERDEDORES
        if (nf<3) {p+=1;} // PERDEDORES
        else {pg+=nf;} // PROMEDIO DE GANADOS

        // NOTA MAS ALTA
        if (nf >= notaMayor) { notaMayor = nf; }
        
        i++;
    }
    
    cout<<"Perdedores: "<<p<<endl;
    cout<<"Nota Mayor : "<<notaMayor<<endl;
    cout<<"Promedio de ganadores: "<<(pg)/(stud-p)<<endl;
    return 0;
}