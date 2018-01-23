//ESTRUCTURA//
#include<iostream>
using namespace std;

int main(){
    struct persona{
           string nombre;
           int edad;
           char pelo;
           };
    persona amigo1;
    persona amigo2;
    persona amigo3;
    cout << "Nombre de tu amigo: ";
    cin>>amigo1.nombre;
    cout << "Años de tu amigo: ";
    cin>>amigo1.edad;
    cout << "Color de pelo(r/c/n): ";
    cin>>amigo1.pelo;
    }
