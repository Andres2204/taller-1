#include<iostream>
#include<stdio.h>
#include<string>

using namespace std; 

/*
INGRESAR UNA CADENA Y DETERMINAR O NO SI ES UN PANGRAMA
*/

int main() {
    string frase;
    string letras;
    bool aux;
    cout<<"Ej: The quick brown fox jumps over the lazy dog"<<endl;
    cout<<"Ingresar una frase para determinar si es un pangrama: ";
    getline(cin, frase);

    letras += frase[0];
    for (int i = 0; i < frase.size(); i++) {
        if (isspace(frase[i])) {
            continue;
        }
    
        for (int j = 0; j < letras.size(); j++) {
            if (tolower(letras[j])==tolower(frase[i])) {
                aux = false;
                break;
            }  else aux = true;
        }

        if (aux == true) {
            letras += frase[i];
        }
    
    }
    if (letras.size() == 26) {
        cout<<"Es un Pangrama ";
    } else {
        cout<<"No es un pangrama ";
    }
}