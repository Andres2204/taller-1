#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int cod; // Enteros
float V_Compra, V_Pagar; // Flotantes o decimales
char pwd[10]; // Caracteres
string pwd2; // Variable de tipo string
#define pdscto 0.15; // Definir como constantes
int main(int argc, char** argv) {
  printf("\nDigite Su ID:");
  scanf("%d",&cod);
  printf("\nDigita tu PassWord:");
  scanf("%s",&pwd);
  printf("\nBienvenido Usuario # %d , Su clave del poli es: %s",cod,pwd);
  printf("\n La tangente de su ID es: %f",tan(cod));
  return 0;
}