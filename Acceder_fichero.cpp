#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    int salir;
    string linea;
    string ubicacion;
    int repetir=0;
    cout<<"¿A que fichero quieres acceder de tu directorio raiz?"<<endl;
    cout<<"Ubicacion: ";
    getline(cin,ubicacion);
    ifstream fichero(ubicacion.c_str());
        do{
        cout<<"¿A que fichero quieres acceder de tu directorio raiz?"<<endl;
        cout<<"Ubicacion: ";
        getline(cin,ubicacion);
        ifstream fichero(ubicacion.c_str());
        if (fichero.fail()==1){
           cout<< "ERROR. No existe una ruta"; 
           repetir=1;                       
           }else{
           repetir=1;   
           }while(repetir==1);
    while(fichero.eof()==0){
    getline(fichero,linea); 
    cout<<linea<<endl;
            }
    fichero.close(); 
    cin>>salir;
    return 0;
    }
