//ESTRUCTURA//
#include<iostream>
using namespace std;

int main(){
    struct persona{
           string nombre;
           int edad;
           char pelo;
    };
    int cont;
    int salir;
    persona amigo[3];
    for (cont=0;cont<3;cont++){
        cout<<"DATOS DEL AMIGO"<<" "<<cont+1<<": "<<endl;
        cout<<"Nombre de tu amigo: "<<endl;
        cin>>amigo[cont].nombre;
        cout<<"Años de tu amigo: "<<endl;
        cin>>amigo[cont].edad;
        cout<<"Color de pelo(r/c/n): "<<endl;
        cin>>amigo[cont].pelo;
        }
    cin>>salir;
    }
