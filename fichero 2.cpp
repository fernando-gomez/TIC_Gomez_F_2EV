//FICHEROS
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int salir;
    string mensaje;
    ifstream fichero("Fichero.txt");
    fichero>>mensaje;
    cout<<mensaje<<endl; 
    cin>>salir;
    return 0;
    }
