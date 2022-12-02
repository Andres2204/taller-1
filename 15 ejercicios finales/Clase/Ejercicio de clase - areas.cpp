#include "iostream"
using namespace std;
int opcion;
float area;

float triangulo() { 
    float b,alt;
    printf("Base:");
    scanf("%f",&b);
    printf("Altura:");
    scanf("%f",&alt);
    return b*alt/2;
}
void cuadrado() { 
    float l;
    printf("Lado:");
    scanf("%f",&l);
    area=1*1;
}
float trapecio() { 
    float bm, bn, l;
    printf("Base Mayor:");
    scanf("%f",&bm);
    printf("Base Menor:");
    scanf("%f",&bn);
    printf("Altura:");
    scanf("%f",&l);
    return bm+bn/2*l;
}
int main(int argc, char** argv) {
	printf("MENU \n1.Triangulo\n2.Cuadrado\n3.Trapecio\n4.Salir");
	scanf("%d",&opcion);
	switch (opcion){
        case 1: area=triangulo();break;
	    case 2: cuadrado();break;
	    case 3: area=trapecio();break;
	    case 4: break;
	    default: printf("Fuera del rango");break;
	}
	printf("AREA:%f",area);
	return 0;
}
